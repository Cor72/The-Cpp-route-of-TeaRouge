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
    vll a(n,vector<ll>(n));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)\
        {
            cin>>a[i][j];
        }
    }
    ll total=0;
    [&](){
        for(auto &t:a) total+=accumulate(t.begin(),t.end(),0ll);
    }();
    cout<<total<<"\n";
    


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}