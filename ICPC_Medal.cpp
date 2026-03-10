#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vll=vector<vector<ll>>;
const int N=4e5+1;const int MOD=998244353;

void solve()
{
    //分别表示初始金牌数、银牌数、铜牌数，以及合成银牌所需的铜牌数、合成金牌所需的银牌数。
    int a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
    bool changed = true;
    while (changed) {
        changed = false;
        if (x > 0 && c >= x) {
            ll ne = c / x;
            b += ne;
            c %= x;
            changed = true;
        }
        if (y > 0 && b >= y) {
            long long ne = b / y;
            a += ne;
            b %= y;
            c += ne;
            changed = true;
        }
    }

    cout << a << endl;


    



}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
