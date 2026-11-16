#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;
using vii=vector<int>;
const int N=1e9+7;const int MOD=998244353;

void solve()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int h=a*10+b+c*10+d;
    int k=a*10+c+b*10+d;
    cout<<abs(h-k)<<endl;



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
