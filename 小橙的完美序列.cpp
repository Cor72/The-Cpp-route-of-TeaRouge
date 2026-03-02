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
    unordered_map<int,int> cnt;
    int max=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        int x=i^a[i];
        cnt[x]++;
        if(cnt[x]>=max)
        max=cnt[x];
    }
    cout<<n-max;





}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
