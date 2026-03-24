#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vll=vector<vector<ll>>;
const int N=4e5+1;const int MOD=998244353;

void solve()
{
    int n,m,t;
    cin>>n>>m>>t;
    // vector<ll> a(n);
    ll cnt=m*n;
    int x=0,y=0;
    vector<bool> r(101010, false);
    vector<bool> l(101010, false);
    for(int i=0;i<t;i++)
    {
        int a,b;
        cin>>a>>b;
        // cout<<x<<" "<<y<<endl;
        if(a==0)
        {
            if(!r[b])
            {
            r[b] = true;
            x++;
            // cnt-=m;
            // cnt+=y;
            }
        }
        else
        {
            if(!l[b])
            {
            l[b] = true;
            y++;
            // cnt-=n;
            // cnt+=x;
            }
        }
    }
    cnt=(ll)m*n-(ll)x*m-(ll)y*n+(ll)x*y;
    cout<<cnt<<endl;
    


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}