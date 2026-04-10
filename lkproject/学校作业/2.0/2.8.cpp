#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vll=vector<vector<ll>>;
const int N=4e5+1;const int MOD=998244353;

void solve()
{
    string s;
    cin>>s;
    int n=s.size();
    stack<int> st;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(') st.push(i);
        else if(s[i]==')')
        {
            st.pop();
        }
    }
    if(st.size()==0)
    {
        cout<<"YES\n";
        return;
    }
    else
    {
        cout<<"NO\n";
        return;
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