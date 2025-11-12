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
        vector<int> a1(n), a2(n);
        for (int i = 0; i < n; ++i) cin >> a1[i];
        for (int i = 0; i < n; ++i) cin >> a2[i];

        int m = 2 * n;
        // 前缀/后缀 1-标记
        vector<char> pre(n + 1, 1), suf(n + 1, 1);

        auto cover = [&](int l, int r) {
            // pre[k] = row1[0..k] 全在 [l,r]
            for (int i = 0; i < n; ++i) pre[i + 1] = pre[i] && (a1[i] >= l && a1[i] <= r);
            // suf[k] = row2[k..n-1] 全在 [l,r]
            for (int i = n - 1; i >= 0; --i) suf[i] = suf[i + 1] && (a2[i] >= l && a2[i] <= r);
            // 存在 k 使得 pre[k+1] && suf[k]
            for (int k = 0; k < n; ++k)
                if (pre[k + 1] && suf[k]) return true;
            return false;
        };

        long long ans = 0;
        int r = 0;
        for (int l = 1; l <= m; ++l) {
            while (r <= m && !cover(l, r)) ++r;
            if (r <= m) ans += m - r + 1;
        }
        cout << ans << '\n';
    }
    return 0;
}
