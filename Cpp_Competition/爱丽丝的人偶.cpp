#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a;
    int lo = 1, hi = (n + 1) / 2 + 1;
    for (int i = 0; i < n; ++i) {
        if (i & 1) {
            a.push_back(hi++);
        } else {
            a.push_back(lo++);
        }
    }

    for (int x : a) cout << x << ' ';
    cout << '\n';
    return 0;
}
