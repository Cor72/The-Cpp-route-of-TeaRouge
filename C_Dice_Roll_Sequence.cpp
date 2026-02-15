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
using vii=vector<vector<int>>;
const int N=4e5+1;

void solve()
{
    int n;
    cin>>n;
    vector<ll> a(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    vector<int> dp(7,0);
    for (int v = 1; v <= 6; v++) {
        dp[v] = (a[1] == v ? 0 : 1);
    }
    for (int i = 2; i <= n; i++) {
        vector<int> dp2(7, N);
        for (int v = 1; v <= 6; v++) {
            int cost = (a[i] == v ? 0 : 1);
            for (int u = 1; u <= 6; u++) {
                if (u==v||u+v== 7) continue;
                dp2[v] = min(dp2[v], dp[u]+cost);
                }
            }
            dp=dp2;
        }

        int ans = *min_element(dp.begin() + 1, dp.end());
        cout << ans << '\n';


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
