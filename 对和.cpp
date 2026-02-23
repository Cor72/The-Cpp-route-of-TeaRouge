#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    int even = 0, odd = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        if (a[i] % 2 == 0) even++;
        else odd++;
    }

    ll an = (ll)(n - 1) * sum;
    ll bn = (ll)even * odd;
    ll ans = (an-bn) / 2;

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}