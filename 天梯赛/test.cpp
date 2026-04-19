#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
const int M = 1e9 + 7;
void solve()
{
    string s;
    cin >> s;
    stack<char>st;
    for(char&c:s)
    {
        if(c==')')
        {
            string res;
            while(st.top()!='(')
            {
                res+=st.top();
                st.pop();
            }
            st.pop();
            reverse(res.begin(),res.end());
            cout << res << '\n';
        }
        else st.push(c);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    //cin >> t;
    while (t--)solve();
    return 0;
}