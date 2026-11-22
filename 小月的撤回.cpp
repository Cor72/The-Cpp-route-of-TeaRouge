#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;
using vii=vector<int>;
const int N=1e9+7;const int MOD=998244353;

void solve()
{
    int n;
    cin>>n;
    unordered_set<int> s;
    for(int i=1;i<=n;i++)
    {
        s.insert(i);
    }
    int a,b;cin>>a>>b;
    s.erase(a);s.erase(b);
    cout<<s.size();



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
