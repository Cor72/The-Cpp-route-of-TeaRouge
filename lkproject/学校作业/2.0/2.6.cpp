#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vll=vector<vector<ll>>;
const int N=4e5+1;const int MOD=998244353;

void solve()
{
    string s;
    cin>>s;
    string sr(s.rbegin(),s.rend());
    if(s==sr)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}