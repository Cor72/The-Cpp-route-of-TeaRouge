#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vll=vector<vector<ll>>;
const int N=4e5+1;const int MOD=998244353;

void solve(vector<ll> &a)
{
    int max_bal=*max_element(a.begin(),a.end());
    int min_bal=*min_element(a.begin(),a.end());
    cout<<max_bal<<"\n";
    cout<<min_bal<<"\n";
    


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n=10;
    vector<ll> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    solve(a);
    return 0;
}