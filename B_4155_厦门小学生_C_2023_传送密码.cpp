#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;
using vii=vector<int>;
const int N=1e9+7;const int MOD=998244353;

bool check(const vector<int>& arr)
{
    double sum = 0.0;
    for (int x : arr)
    {
        sum += 1.0 / (x * x);
    }
    // 浮点精度判断
    return fabs(sum - 1.0) < 1e-8;
}

// 构造满足条件的数组
vector<int> buildArray(int n)
{
    vector<int> res = {2,2,2,2}; // 初始n=4基准解

    while ((int)res.size() < n)
    {
        int nowLen = res.size();
        int diff = n - nowLen;

        // 优先用+3拆分（1个变4个）
        if (diff >= 3)
        {
            int val = res.back();
            res.pop_back();
            // 替换为4倍值的四个数
            int newVal = val * 2;
            res.insert(res.end(), 4, newVal);
        }
        // 剩余不足3，用+8拆分兜底
        else
        {
            int val = res.back();
            res.pop_back();
            int newVal = val * 3 / 2;
            res.insert(res.end(), 9, newVal);
        }
    }
    return res;
}

int main()
{
    int n;
    cout << "请输入数组长度n(n>=4)：";
    cin >> n;

    if (n < 4)
    {
        cout << "n小于4无合法解！" << endl;
        return 0;
    }

    vector<int> ans = buildArray(n);
    cout << "构造的数组：" << endl;
    for (int num : ans)
    {
        cout << num << " ";
    }
    cout << endl;

    bool ok = check(ans);
    double sum = 0.0;
    for (int x : ans) sum += 1.0/(x*x);
    cout << fixed << setprecision(10);
    cout << "平方倒数和：" << sum << endl;
    cout << (ok ? "验证通过" : "验证失败") << endl;

    return 0;
}