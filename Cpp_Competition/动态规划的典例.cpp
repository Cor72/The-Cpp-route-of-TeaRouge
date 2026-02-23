#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include<queue>
#include<vector>
#include<map>
#include<iomanip>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vll=vector<vector<ll>>;
const int N=1e9;

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<vector<int>> dp(n,vector<int>(2, N));


    if (a[0] == 1)
    dp[0][0] = N;
    else
    dp[0][0] = 0;

    dp[0][1] = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] != 1) {
            if (gcd(a[i], a[i-1]) > 1) {
                dp[i][0] = min(dp[i][0], dp[i-1][0]);
            }
            dp[i][0] = min(dp[i][0], dp[i-1][1]);
        }
        dp[i][1] = min(dp[i-1][0], dp[i-1][1]) + 1;
    }

    cout << min(dp[n-1][0], dp[n-1][1]) << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;cin>>T;
    while(T--)
    solve();
    return 0;
}
