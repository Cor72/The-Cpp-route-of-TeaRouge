#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        int mx = 0;
        for (int i = 0; i < n; ++i) {
            cin >> p[i];
            mx = max(mx, p[i]);
        }
        if (mx != n) { cout << "NO\n"; continue; }

        int rise = 0;
        for (int i = 1; i < n; ++i)
            if (p[i] > p[i - 1]) ++rise;
        cout << (rise <= 1 ? "YES\n" : "NO\n");
    }
    return 0;
}
