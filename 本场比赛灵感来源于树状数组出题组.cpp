#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include<queue>
#include<vector>
#include<map>
using namespace std;
using ll=long long;
using pii=pair<int,int>;
const int N=4e5+1;

void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    double es=(n-1)*0.8;
    int res=ceil(es);
    // cout<<res;
    sort(a.begin(),a.end());
    int ans=0;
    for (int i = 0;res-1-i>=0;i++)
    {
        if(a[res-i]==a[res-1-i])
        ans+=a[res-1-i];
        else
        break;
    }
    for (int i = res; i<n; i++)
    {
        ans+=a[i];
    }
    cout<<ans;
    

        




}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
