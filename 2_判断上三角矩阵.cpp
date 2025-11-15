#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;

bool solve() {
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> a[i][j];

    for (int i = 1; i < n; ++i)          // 下三角：行 1..n-1
        for (int j = 0; j < i; ++j)      // 列 0..i-1
            if (a[i][j] != 0) return false;
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;cin>>T;
    while(T--){cout<<(solve()?"YES":"NO");
    cout<<"\n";}
    return 0;
}