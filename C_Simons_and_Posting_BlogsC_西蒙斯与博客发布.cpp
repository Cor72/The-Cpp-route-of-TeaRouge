#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<vector<int>> a(n);
    for (int i = 0; i < n; i++) {
        int l;
        cin >> l;
        a[i].resize(l);
        for (int j = 0; j < l; j++) {
            cin >> a[i][j];
        }
    }
    if (n > 8) {

        list<int> q;
        unordered_set<int> in_q;
        for (int i = 0; i < n; i++) {
            for (int let : a[i]) {
                if (in_q.count(let)) {
                    // remove from middle - O(n) but n is small
                    q.remove(let);
                }
                q.push_front(let);
                in_q.insert(let);
            }
        }
        for (int x : q) cout << x << " ";
        cout << '\n';
        return;
    }
    vector<int> tem(n);
    iota(tem.begin(), tem.end(), 0);
    vector<int> ans;

    do {
        deque<int> q;
        for (int idx : tem) {
            for (int let : a[idx]) {
                auto it = find(q.begin(), q.end(), let);
                if (it != q.end()) {
                    q.erase(it);
                }
                q.push_front(let);
            }
        }
        vector<int> vec(q.begin(), q.end());
        if (ans.empty() || vec < ans) {
            ans = move(vec);
        }
    } while (next_permutation(tem.begin(), tem.end()));

    for (int x : ans) cout << x << " ";
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}