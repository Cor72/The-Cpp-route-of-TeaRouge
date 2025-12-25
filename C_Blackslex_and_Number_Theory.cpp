#include<bits/stdc++.h>
using namespace std;
#define int long long

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve()
{
    int n;cin >> n;
    vector<int> a(n+1);for(int i=1;i<=n;i++) cin >> a[i];
    sort(a.begin()+1,a.end());
    cout << max(a[2]-a[1],a[1]) << endl;
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;cin >> T;
    while(T--) solve();
    return 0;
}