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
const int N=2e5+10,mod=998244353;

int n,m,k,a[N];
void solve(){
    cin>>n;
    int t=__lg(n);
    int x=n<<(t+1);
    int y=x+n;
    cout<<x<<' '<<y<<"\n";
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
