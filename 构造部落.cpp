#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include<queue>
#include<vector>
#include<map>
using namespace std;
using ll=long long;
using pii=pair<int,int>;
const int N=4e5+1;


void solve()
{
    int n,q,s;
    cin>>n>>q>>s;

    vector<ll> sum(n + 1);
    for (int i = 1; i <= n; i++) {
        ll c; 
        cin >> c;
        sum[i] = sum[i-1] + c;
    }
    
    while(q--) {
        int x, y;
        cin>>x>>y;
        ll ans=s + sum[x-1] + (y - 1);
        cout <<ans<<"\n";
    }
    



}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
