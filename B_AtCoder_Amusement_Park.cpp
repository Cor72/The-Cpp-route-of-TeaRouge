#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;
using vii=vector<int>;
const int N=1e9+7;const int MOD=998244353;

void solve()
{
    int n,m;
    cin>>n>>m;
    int ans=0;
    deque<int> a;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        a.push_back(x);
    }
    while(!a.empty())
    {
        int cnt=m;
        while(!a.empty()&&cnt>=a.front())
        {
            cnt-=a.front();
            a.pop_front();
        }
        ans++;
    }
    cout<<ans;




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
