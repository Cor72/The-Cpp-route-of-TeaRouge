#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vll=vector<vector<ll>>;
const int N=4e5+1;const int MOD=998244353;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    stack<char> a;
    a.push(s[0]);
    // cout<<a.top();
    // cout<<"yes";
    for(int i=1;i<n;i++)
    {
        if(a.empty())
        {
            a.push(s[i]);
        continue;         
        }
        // cout<<"yes";
        if(s[i]==a.top())
        a.pop();
        else
        a.push(s[i]);
    }
    if(a.empty())
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";



}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;cin>>T;
    while(T--)
    solve();
    // cout<<"yes";
    return 0;
}
