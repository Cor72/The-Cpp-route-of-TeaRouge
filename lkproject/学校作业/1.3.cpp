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
    //对n阶乘
    ll ans=1;
    for(int i=1;i<=n;i++)
    {
        ans*=i;
        ans%=MOD;
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