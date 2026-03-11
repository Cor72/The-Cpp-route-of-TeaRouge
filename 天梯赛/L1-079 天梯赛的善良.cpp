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
    vector<ll> a(n+1);
    map<ll,ll> mp;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    cout<<mp.begin()->first<<" "<<mp.begin()->second<<"\n";
    cout<<mp.rbegin()->first<<" "<<mp.rbegin()->second<<"\n";



}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}