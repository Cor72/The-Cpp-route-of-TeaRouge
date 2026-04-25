#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vll=vector<vector<ll>>;
const int N=4e5+1;const int MOD=998244353;
void solve()
{
    int m,n;
    cin>>m>>n;
    vector<int> a(m);
    vector<int> b(n);
    for(int i=0;i<m;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    sort(a.begin(),a.end(),[&](int a,int b){return a<b;});
    sort(b.begin(),b.end(),[&](int a,int b){return a<b;});
    for(int i=0;i<m;i++)
    cout<<a[i]<<" ";
    cout<<"\n";
    for(int i=0;i<n;i++)
    cout<<b[i]<<" ";
    cout<<"\n";


    


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}