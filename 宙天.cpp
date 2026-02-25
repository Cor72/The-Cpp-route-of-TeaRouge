#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vll=vector<vector<ll>>;


void solve()
{
    int n;
    cin>>n;
    vector<int> a(20);
    for(int i=1;i<=10;i++)
    {
        a[i]=i*(i+1);
        // cout<<a[i]<<" ";
        if(a[i]==n)
        {
            cout<<"YES";
            return;
        }
        // cout<<"l";
    }
    
    cout<<"NO";



}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
