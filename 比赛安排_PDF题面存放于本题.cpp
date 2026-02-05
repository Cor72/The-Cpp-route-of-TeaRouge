#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include<queue>
#include<vector>
using namespace std;
using ll=long long;
using pii=pair<int,int>;
const int N=4e5+1;

void solve()
{
    ll a,b,c;
    cin>>a>>b>>c;
    bool ok=true;
    if((abs(a-b))>1||(abs(c-b))>1||(abs(a-c))>1)
    ok=false;
    if(ok)
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";


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
