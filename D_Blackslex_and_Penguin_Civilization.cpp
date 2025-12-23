#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < (1 << n); ++i) {
            int x = i;
            int rev = 0;
            for (int j = 0; j < n; ++j) {
                rev = (rev << 1) | (x & 1);
                x >>= 1;
            }
            v.push_back(rev);
        }
        sort(v.begin(), v.end());
        for (int x : v) cout << x << " ";
        cout << endl;
    }
}
