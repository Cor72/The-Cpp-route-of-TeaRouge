#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vll=vector<vector<ll>>;

void solve()
{
    int n;char x;
    cin>>n>>x;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string s;
    getline(cin,s);
    // cout<<s<<"\n";
    if (s.size() > n) {
        // 从原始字符串的末尾截取最后n个字符并输出
        for (int i = s.size() - n; i < s.size(); i++) 
            printf("%c", s[i]);  // 输出从原始字符串中截取的部分
    } else { 
        // 如果原始字符串的长度小于目标长度
        // 先输出填充字符b，直到达到目标长度
        for (int i = 0; i < n - s.size(); i++) 
            printf("%c", x);  // 输出填充字符b
 
        // 然后输出原始字符串a
        for (int i = 0; i < s.size(); i++) 
            printf("%c", s[i]);  // 输出原始字符串a的内容
    }

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}