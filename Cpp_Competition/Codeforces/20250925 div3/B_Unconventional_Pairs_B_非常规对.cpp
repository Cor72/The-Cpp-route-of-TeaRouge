#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;

void solve()
{
    
    
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int zero=0;
        int fuone=0;
        vector<ll> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        sort(a.begin(),a.end());
        ll ans=0;
        for(int i=0;i<n;i+=2)
        {
            ans = max(ans, a[i + 1] - a[i]);
        }
        cout<<ans<<"\n";
    }
    return 0;
}