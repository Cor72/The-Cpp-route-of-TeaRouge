#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vll=vector<vector<ll>>;
const int N=4e5+1;const int MOD=998244353;
vector<int> a;
void threee(int o,int p)
{
    reverse(a.begin()+o,a.begin()+p);
}
void solve()
{
    int n;cin>>n;a.resize(n);
    for(int i=0;i<N;i++) cin>>a[i];
    int o,p;
    cin>>o>>p;
    threee(o,p);


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}