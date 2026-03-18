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
    vector<int> a(n);
    ll sum=0;
    int S=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    ll ans=0;
    if(sum>0)
    S=(sum+n-1)/n;
    else
    S=(sum)/n;
    // cout<<S<<" "<<sum<<" "<<n<<"\n";
    for(int i=0;i<n;i++)
    {
        if(a[i]<S)
        ans+=S-a[i];
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
