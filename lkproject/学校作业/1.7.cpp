#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vll=vector<vector<ll>>;
const int N=4e5+1;const int MOD=998244353;

void solve()
{
    long long fib[33];
    fib[1] = 1;
    fib[2] = 1;
    for (int i = 3; i <= 32; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    double sum = 0.0;
    for (int n = 1; n <= 30; n++) {
        double term = static_cast<double>(fib[n+2]) / fib[n+1];
        sum += term;
    }

    cout << sum << endl;


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}