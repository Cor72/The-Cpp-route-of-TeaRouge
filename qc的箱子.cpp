#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;
using vii=vector<int>;
const int N=1e9+7;const int MOD=998244353;

void solve()
{
    int n;
    cin >> n;
    vector<ll> b(n);
    for (int i = 1; i < n; ++i) cin >> b[i];
    vector<ll> s(n + 1);
    vector<ll> c(n + 1);
    s[1] = 1;
    c[1] = 0;
    for (int i=2;i<=n;++i) {
        s[i]=-s[i-1];
        c[i]=b[i-1]-c[i-1];
    }
    ll L = 1;
    long long R = LLONG_MAX / 2;  // 初始上界
    for (int i=1;i<=n;++i) {
        if (s[i] == 1) {
            L=max(L, 1LL-c[i]);
        } else{
            R=min(R,c[i]-1LL);
        }
    }
    if(L>R) {
        cout<<-1<<'\n';
        return;
    }


    while (lo < hi) {
        long long mid = (lo + hi) / 2;
        if (check(mid))
            hi = mid;
        else
            lo = mid + 1;
    }

    cout << lo << '\n';


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //int T;cin>>T;
    //while(T--)
    solve();
    return 0;
}