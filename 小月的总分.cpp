#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;
using vii=vector<int>;
const int N=1e9+7;const int MOD=998244353;

void solve()
{
    int n;
    ll k,m;
    cin>>k>>m>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<ll> b(n);
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    ll lu=0; ll ru=k*m;
    ll sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        ll human=k+i+1;
        ll low=b[i]*human-sum;
        ll high=(b[i]+1)*human-sum-1;
        lu=max(lu,low);
        ru=min(ru,high);
        if(lu>ru)
        {
            cout<<0<<"\n";
            return;
        }
    }

    cout<<ru-lu+1<<"\n";
    return;



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
