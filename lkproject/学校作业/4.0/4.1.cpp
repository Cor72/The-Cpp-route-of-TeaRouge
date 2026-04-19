#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vll=vector<vector<ll>>;
const int N=4e5+1;const int MOD=998244353;

void solve()
{
    int n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    auto maxit =max_element(a.begin(),a.end());
    auto minit =min_element(a.begin(),a.end());
    swap(*maxit,*(a.end()-1));
    swap(*minit,*(a.begin()));
    for(auto i:a)
    {
        cout<<i<<" ";
    }


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}