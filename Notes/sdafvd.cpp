#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long m, n;
    if (!(cin >> m >> n)) return 0;
    long long N = m + n - 2;
    long long K = min(m - 1, n - 1);
    __int128 res = 1;
    for (long long i = 1; i <= K; ++i) {
        res = res * (N - K + i) / i;
    }
    long long ans = (long long)res;
    cout << ans << '\n';
    return 0;
}#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;

void solve()
{
    ll m, n;
    if (!(cin >> m >> n)) return;
    ll N = m + n - 2;
    ll K = min(m - 1, n - 1);
    ll res = 1;
    for (ll i = 1; i <= K; ++i) {
        res = res * (N - K + i) / i;
    }
    cout << res << '\n';
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}


