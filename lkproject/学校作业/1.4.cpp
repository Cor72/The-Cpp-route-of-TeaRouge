#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vll=vector<vector<ll>>;
const int N=4e5+1;const int MOD=998244353;




void solve()
{
    int t=0;cin>>t;
    ll ans=1;
    while(t--)
    {
        int n;
        cin>>n;
        //对n阶乘
        ll tmp=1;
        for(int i=1;i<=n;i++)
        {
            tmp*=i;
            tmp%=MOD;
        }
        ans+=tmp;
    }

    cout<<ans<<endl;
    


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}