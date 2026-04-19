#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int *p, i, j;
    p = a[0];
    cin >> i >> j;
    cout << "a[" << i << "][" << j << "] = " << *(p + i * 4 + j) << endl;
    return 0;
}
