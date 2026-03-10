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
    int ans=0;
    vector<ll> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if (n == 0) {
    cout << 0 << '\n';
    return;
    }
    vector<long long> c(n);
    c[0] = a[0];
    for (int i = 1; i < n; i++) {
        c[i] = min(c[i-1] - 1, a[i]);
        if (c[i] < 0) c[i] = 0;
    }

    set<ll> di;
    for (ll val : c) {
        di.insert(val);
    }

    cout << di.size() << '\n';



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
