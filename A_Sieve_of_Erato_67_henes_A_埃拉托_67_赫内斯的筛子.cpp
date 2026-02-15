#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include<queue>
#include<vector>
#include<map>
#include<iomanip>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vii=vector<vector<int>>;
const int N=4e5+1;

void solve()
{
    int n;
    cin>>n;
    bool ok=false;
    bool ok2=false;
    vector<ll> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==67)
        ok=true;
    }
    if(ok)
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";



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
