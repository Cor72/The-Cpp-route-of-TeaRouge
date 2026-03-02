#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll KK(ll n) {
    if (n == 1) return 1;
    ll res=1;

    if (n % 2 == 0) {
        res*= 2;
        while (n % 2 == 0) n /= 2;
    }

    for (ll i=3; i*i<= n; i += 2) {
        if (n%i==0) {
            res*=i;
            while (n%i==0) n/= i;
        }
    }

    if (n>1) res *= n;
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        ll n;
        cin >> n;
        cout << KK(n) << '\n';
    }
    return 0;
}