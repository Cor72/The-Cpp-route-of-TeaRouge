#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;
using vii=vector<int>;
const int N=1e9+7;const int MOD=100000000;

void solve()
{
    int n;
    cin>>n;
    vector<ll> a(n);
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        ll x;cin>>x;
        a[i]=x;
        sum+=x;
    }
    sum*=(n-1);
    ll cnt=0;
    sort(a.begin(),a.end());
    for(int i=n-1;i>=0;i--)
    {
        int it=lower_bound(a.begin(),a.begin()+i,MOD-a[i])-a.begin();
        if(it!=i+1)
        cnt+=(i-it);
    }
    sum-=cnt*MOD;
    cout<<sum;



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
