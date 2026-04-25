#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    stack<int> s1; // A 塔：递减栈 (下大上小)
    stack<int> s2; // B 塔：递增栈 (下小上大)
    
    int cnt = 0;      // 完成的塔数量
    int max_h = 0;    // 最大高度

    for (int x : a) {
        // 1. 尝试放入 A 塔 (必须严格小于栈顶)
        if (s1.empty() || x < s1.top()) {
            s1.push(x);
        } 
        // 2. 尝试放入 B 塔 (必须严格大于栈顶)
        else if (s2.empty() || x > s2.top()) {
            s2.push(x);
        } 
        // 3. 都放不下，A 塔完工，重建
        else {
            // 记录 A 塔
            cnt++;
            max_h = max(max_h, (int)s1.size());
            
            // 清空 A 塔
            while (!s1.empty()) s1.pop();
            
            // 将 B 塔中比 x 大的盘子移回 A 塔
            // B 塔是递增的，栈顶最大。只要栈顶 > x，就说明这个盘子比 x 大，
            // 它可以作为新 A 塔的底部（因为它比 x 大），所以移过去。
            while (!s2.empty() && s2.top() > x) {
                s1.push(s2.top());
                s2.pop();
            }
            
            // 将 x 放入新的 A 塔
            s1.push(x);
        }
    }

    // 处理最后剩余的塔
    if (!s1.empty()) {
        cnt++;
        max_h = max(max_h, (int)s1.size());
    }
    if (!s2.empty()) {
        cnt++;
        max_h = max(max_h, (int)s2.size());
    }

    // 只在最后输出一次
    cout << cnt << " " << max_h << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}