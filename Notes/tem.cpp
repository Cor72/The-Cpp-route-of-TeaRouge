#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;

void solve()
{
    int n;
    ll k;
    cin >> n >> k;
    vector<ll> t(n);
    for (int i = 0; i < n; ++i) cin >> t[i];

    ll low = 0, high = 200000000000LL;
    while (low < high) {
        ll mid = low + (high - low) / 2;
        ll produced = 0;
        for (int i = 0; i < n; ++i) {
            produced += mid / t[i];
            if (produced >= k) break;
        }
        if (produced >= k) high = mid;
        else low = mid + 1;
    }
    cout << low << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}


