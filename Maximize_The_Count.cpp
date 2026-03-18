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
    ll ans=0;
    vector<ll> a(n+1);
    unordered_map<ll,ll> mp;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        int cnt=i-a[i];
        mp[cnt]++;
        ans=max(ans,mp[cnt]);
    }
    cout<<ans<<"\n";



}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;cin>>T;
    while(T--)
    solve();
    return 0;
}
