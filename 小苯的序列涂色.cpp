#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vll=vector<vector<ll>>;
const int N=1e9+1;const int MOD=998244353;

void solve()
{
    int n;
    cin>>n;
    vector<ll> a(n+1);
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        // ans=ans^a[i];
    }
    // cout<<ans<<"\n";
    vector<int> dp(n+1,N);
    dp[0]=0;
    dp[1]=a[1];
    for(int i=2;i<=n;i++)
    {
        int sum=0;int Min=N;
        for(int j=i;j>=0;j--)
        {
            sum^=a[j];
            Min=min(Min,dp[j-1]);
            dp[i]=min(dp[i],sum+Min);
        }
    }
    cout<<dp[n]<<"\n";



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
