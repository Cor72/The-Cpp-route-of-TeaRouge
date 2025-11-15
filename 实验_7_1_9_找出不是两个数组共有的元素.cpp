#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n;
    vector<int> a(n);
    unordered_set<int> sa;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sa.insert(a[i]);
    }

    cin >> m;
    vector<int> b(m);
    unordered_set<int> sb;
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
        sb.insert(b[i]);
    }

    unordered_set<int> out;
    vector<int> res;
    auto add = [&](int x) {
        if (!out.count(x) && sa.count(x) + sb.count(x) == 1) {
            out.insert(x);
            res.push_back(x);
        }
    };
    for (int x : a) add(x);
    for (int x : b) add(x);

    for (int i = 0; i < res.size(); ++i) {
        if (i) cout << ' ';
        cout << res[i];
    }
    cout << '\n';
    return 0;
}
