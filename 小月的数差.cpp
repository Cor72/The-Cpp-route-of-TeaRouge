#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;
using vii=vector<int>;
const int N=1e9+7;const int MOD=998244353;

void solve()
{
    int n;int k;string s;
    cin>>n>>k>>s;
    vector<int> pre(n+1,0);
    for(int i=1;i<=n;i++){
        pre[i]=pre[i-1]+(s[i-1]=='1'?1:-1);
    }
    vector<int> cnt(2*n+1,0);
    ll ans=0;

    for(int r=0;r<n;r++){
        cnt[pre[r]+n]++;
        if(k==0){
            ans+=cnt[pre[r+1]+n];
        }else{
            int need1=pre[r+1]-k;
            int need2=pre[r+1]+k;
            if (need1>=-n&&need1<=n)ans+=cnt[need1+n];
            if (need2>=-n&&need2<=n)ans+=cnt[need2+n];
        }
    }

    cout<<ans<<"\n";





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
