#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;

void solve()
{
    
    
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<ll> a(n);
        vector<ll> b(n);
        ll count =0;
        for (ll i=0;i<n;++i){
        cin >> a[i] >> b[i];
        if(a[i] &1)
        {
            if(b[i]==1)
            count++;
        }
        else
        {
            if(b[i]==0)
            count++;
        }
    }
    cout<<m-count<<"\n";
    }
    return 0;
}