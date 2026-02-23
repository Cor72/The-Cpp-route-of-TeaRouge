#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include<queue>
#include<vector>
#include<map>
#include<iomanip>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vii=vector<vector<int>>;
const ll N=1e18;
const int M=998244353;
void solve()
{
    int n;
    cin>>n;
    vector<ll> a(n+1);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<ll> b(n+1);
    ll let=N;ll x=0;ll y=0;
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        let=min(let,b[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>let)
        x++;
        else
        y++;
    }
    ll ans=1;
    for(int i=1;i<=x;i++)
    {
        ans=(ans*i)%M;
    }
    for(int i=1;i<=y;i++)
    {
        ans=(ans*i)%M;
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
