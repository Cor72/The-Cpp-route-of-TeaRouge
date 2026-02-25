#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vll=vector<vector<ll>>;
const int N=4e5+1;const int MOD=998244353;

void solve()
{
    string n;
    cin>>n;
    priority_queue<int> a;
    int ans=0;
    int sum=0;
    a.push(n[0]-'0'-1);
    sum+=(n[0]-'0');
    for(int i=1;i<n.size();i++)
    {
        a.push(n[i]-'0');
        sum+=(n[i]-'0');
        // cout<<sum<<" ";
    }
    while(sum>9)
    {
        int tmp=a.top();
        sum-=tmp;
        a.pop();
        ans++;
    }
    cout<<ans<<"\n";


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
