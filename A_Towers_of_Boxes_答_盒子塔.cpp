#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vll=vector<vector<ll>>;
const int N=4e5+1;const int MOD=998244353;

void solve()
{
    int n,a,b;
    cin>>n>>a>>b;
    int let=b/a;
    if(let<=0)
    {
        cout<<n<<"\n";
        return;
    }
    int tmp=n/(let+1);
    if(n%(let+1)==0)
    cout<<tmp<<"\n";
    else
    cout<<tmp+1<<"\n";




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
