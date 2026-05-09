#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;
using vii=vector<int>;
const int N=1e9+7;const int MOD=998244353;
ll power10(ll exp) {
    ll res = 1, base = 10;
    while (exp > 0) {
        if (exp & 1) res = res * base % MOD;
        base = base * base % MOD;
        exp >>= 1;
    }
    return res;
}
void solve()
{
    int n;
    cin>>n;
    vector<ll> a(n);
    vector<int> b;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        a[i]=x;
        string k=to_string(x);
        b.push_back(k.size());
    }
    vector<ll> suf(n + 1, 0);
    for (int i = n - 1; i >= 0; i--) {
        suf[i] = (suf[i + 1] + power10(b[i])) % MOD;
    }
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        ll coeff = i;
        coeff = (coeff + suf[i + 1]) % MOD;
        ans = (ans + a[i]%MOD*coeff)%MOD;
    }
    cout<<sum;


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // int T;cin>>T;
    // while(T--)
    solve();
    return 0;
}
