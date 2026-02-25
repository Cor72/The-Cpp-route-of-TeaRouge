#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vll=vector<vector<ll>>;
const int N=4e5+1;

void solve()
{
    int n;
    cin>>n;
    // vector<ll> a(n+1);
    map<int, vector<int>> mp;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        mp[x].push_back(i);
    }
    ll ans=0ll;
    for(auto &[x,y]:mp)
    {
        y.insert(y.begin(),0);
        for(int i = 1; i < y.size(); i++){
            int l = y[i - 1];
            int r = n - y[i] + 1;
            ans += 1ll * r * (r + 1) / 2 * (y[i] - l);
        }
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
