#include <bits/stdc++.h>
using namespace std;

bool solve(int x, int y, int z) {
    for (int i = 0; i < 31; ++i) {
        int bx = (x >> i) & 1, by = (y >> i) & 1, bz = (z >> i) & 1;
        bool ok = false;
        for (int m = 0; m < 8; ++m) {
            int a = m >> 2 & 1, b = m >> 1 & 1, c = m & 1;
            if (((a & b) == bx) && ((b & c) == by) && ((a & c) == bz)) { ok = true; break; }
        }
        if (!ok) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
        cout << (solve(x, y, z) ? "YES\n" : "NO\n");
    }
    return 0;
}
