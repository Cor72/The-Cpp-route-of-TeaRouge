#include <iostream>
#include <vector>
#include <deque>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    deque<int> max_q, min_q;
    int left = 0;
    long long ans = 0;

    for (int right = 0; right < n; right++) {
        while (!max_q.empty() && a[max_q.back()] <= a[right])
            max_q.pop_back();
        max_q.push_back(right);

        while (!min_q.empty() && a[min_q.back()] >= a[right])
            min_q.pop_back();
        min_q.push_back(right);

        while (a[max_q.front()] - a[min_q.front()] > 1) {
            left++;
            if (max_q.front() < left) max_q.pop_front();
            if (min_q.front() < left) min_q.pop_front();
        }

        ans += (right - left + 1);
    }

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