#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vll=vector<vector<ll>>;
const int N=4e5+1;const int MOD=998244353;

void solve()
{
    string s1;cin>>s1;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    string s2;cin>>s2;
    auto st=[&](string& s1,string& s2)->void{
        s1=s1+s2;
    };
    st(s1,s2);
    cout<<s1<<endl;



}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}