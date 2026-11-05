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
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll ans=0;
    sort(a.begin(),a.end());
    for(int i=1;i<n;i++)
    {
        b[i]=a[i]-a[i-1];
        ans+=b[i];
    }
    b[0]=8-abs(a[n-1]-a[0]);
    ans+=b[0];
    ans-=*max_element(b.begin(),b.end());
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
