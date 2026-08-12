#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;
using vii=vector<int>;
const int N=1e9+7;const int MOD=998244353;
bool canzero(ll u, ll v, ll X, ll m) {
    ll L = max(0LL, v + m - X);
    ll R = min(m, X- u);
    return L <=R;
}
bool cantwo(ll u, ll v, ll Y, ll m) {
    ll L = max(0LL, Y -u);
    ll R = min(m, v+m-Y);
    return L < R;
}

void solve()
{
    int n; ll m;
    cin>>n>>m;
    ll maxl=0;
    ll mincnt=0;
    ll minl=0;
    ll maxcnt=0;
    
    vector<ll> a(2*n);
    for(int i=0; i<2*n; i++)
    {
        cin>>a[i];
    }
    maxl = a[0] + m; 
    if(a[1] > maxl) {
        mincnt++;
    }
    for(int i=1; i<n; i++)
    {
        ll u = a[2*i];
        ll v = a[2*i+1];
        if(!canzero(u, v, maxl, m) && !canzero(v, u, maxl, m)) {
            if(min(u, v) <= maxl) mincnt += 1;
            else mincnt += 2;
        }
    }
    minl = a[0];
    if(a[1] + m > minl) {
        maxcnt++;
    }
    for(int i=1; i<n; i++)
    {
        ll u = a[2*i];
        ll v = a[2*i+1];
        if(cantwo(u, v, minl, m) || cantwo(v, u, minl, m)) {
            maxcnt += 2;
        } 
        else if(max(u, v) + m > minl) {
            maxcnt += 1;
        }
    }

    cout << mincnt << " " << maxcnt << "\n";
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