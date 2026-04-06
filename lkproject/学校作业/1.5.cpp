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
    vector<ll> a(n);
    ll ans;
    for(int i=1;i<=n;i++)
    {
        if(i%3==0)
        // cout<<i<<" ";
        ans+=i;
    }
    cout<<ans<<"\n";
    
    


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}