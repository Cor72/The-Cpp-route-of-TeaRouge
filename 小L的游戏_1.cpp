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
    ll m,n,z;
    cin>>m>>n>>z;
    ll tem=m+n;
    ll let=z%tem;
    if(let==0)
    cout<<"1";
    else if(let>m)
    cout<<"1";
    else
    cout<<"0";



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
