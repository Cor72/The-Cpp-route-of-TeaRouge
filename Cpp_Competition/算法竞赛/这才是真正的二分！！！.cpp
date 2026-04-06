#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vll=vector<vector<ll>>;
const ll N=1e18;

void solve()
{
    ll s,m;
    cin>>s>>m;
    ll l=-1;
    ll r=N;
    while(l+1<r)
    {
        ll mid=(l+r)/2;
        ll sn=s;
        for(int b=62;b>=0;b--)
        {
            if((m>>b)&1)
            {
                ll num=min(sn>>b,mid);
                sn-=num<<b;
            }
        }
        if(sn==0)
        {
            r=mid;
        }
        else
        {
            l=mid;
        }
    }
    if(r==N)
    cout<<"-1"<<"\n";
    else
    cout<<r<<"\n";

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
