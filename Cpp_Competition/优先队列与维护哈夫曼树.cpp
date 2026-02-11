#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include<queue>
#include<vector>
#include<map>
using namespace std;
using ll=long long;
using pii=pair<int,int>;
using pll=pair<ll,ll>;
const ll N=1e9+7;

void solve()
{
    priority_queue<pll,vector<pll>,greater<pll>> q;
    ll t;cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        q.push({b,a});
    }
    ll res=0;
    while(q.size()>1)
    {
        pll a=q.top();
        q.pop();
        res+=(a.second/2)*a.first*2;
        if(a.second&1)
        {
            pll b=q.top();
            q.pop();
            res+=a.first+b.first;
            pll c={a.first+b.first,1};
            q.push(c);
            a.first*=2;
            a.second/=2;
            if(a.second>0)q.push(a);
            b.second--;
            if(b.second>0)q.push(b);
        }
        else
        {
            a.first*=2;
            a.second/=2;
            if(a.second>0)q.push(a);
        }
        
    }
    res=res%N;
    cout<<res;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
