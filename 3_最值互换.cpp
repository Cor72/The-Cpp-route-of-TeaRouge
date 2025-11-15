#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    while (cin >> n >> m) {
        vector<vector<int>> a(n, vector<int>(m));
        int minVal = INT_MAX, maxVal = INT_MIN;
        int minI = 0, minJ = 0, maxI = 0, maxJ = 0;

        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j) {
                cin >> a[i][j];
                if (a[i][j] < minVal) {
                    minVal = a[i][j];
                    minI = i; minJ = j;
                }
                if (a[i][j] > maxVal) {
                    maxVal = a[i][j];
                    maxI = i; maxJ = j;
                }
            }

        swap(a[minI][minJ], a[maxI][maxJ]);

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (j) cout << ' ';
                cout << a[i][j];
            }
            cout << '\n';
        }
    }
    return 0;
}
