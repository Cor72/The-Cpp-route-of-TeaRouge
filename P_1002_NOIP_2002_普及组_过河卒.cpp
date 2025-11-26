#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    if (!(cin >> n >> k)) return 0;
    vector<long long> a;
    for (int i = 0; i < n; ++i) {
        long long x; cin >> x;
        if (x < 1500) a.push_back(x);
    }

    int m = (int)a.size();
    if (m <= 1 || k >= m) {
        cout << 0 << '\n';
        return 0;
    }

    long long total_range = a[m-1] - a[0];
    vector<long long> gaps;
    gaps.reserve(m-1);
    for (int i = 0; i < m-1; ++i) gaps.push_back(a[i+1] - a[i]);
    sort(gaps.begin(), gaps.end()); 

    long long remove_sum = 0;
    for (int i = 0; i < k-1; ++i) remove_sum += gaps[i];

    cout << (total_range - remove_sum) << '\n';
    return 0;
}