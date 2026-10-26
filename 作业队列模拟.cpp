#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s;
    cin >> s;
    queue<int> q;
    int nxt = 1;
    auto printq = [&]() {
        if (q.empty()) {
            cout << "E\n";
            return;
        }
        queue<int> t = q;
        bool first = true;

        while (!t.empty()) {
            if (!first) cout << ' ';
            first = false;
            cout << t.front();
            t.pop();
        }
        cout << '\n';
    };

    for (char c : s) {
        if (c == 'I') {
            q.push(nxt++);
        } else if (c == 'O') {
            if (!q.empty()) {
                q.pop();
            }
        }

        printq();
    }

    return 0;
}