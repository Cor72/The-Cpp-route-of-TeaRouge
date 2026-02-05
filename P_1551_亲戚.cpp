#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include<queue>
#include<vector>
using namespace std;
using ll=long long;
using pii=pair<int,int>;
const int N=4e5+1;
int n,m,p;
vector<int> a(N);

int findset(int x)
{
    return x==a[x]?x:(findset(a[x]));
}
void sett(int x,int y)
{
    x=findset(x);
    y=findset(y);
    if(x!=y)
    {
        a[x]=a[y];
    }
}
void solve()
{
    cin>>n>>m>>p;
    a[0]=0;
    // cout<<n;
    for(int i=1;i<=n;i++)
    {
        a[i]=i;
        // cout<<a[i]<<" ";
    }
    while(m--)
    {
        int x=0;int y=0;
        cin>>x>>y;
        sett(x,y);
    }
    //for(int i=1;i<=n;i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    while(p--)
    {
        int k=0;int l=0;
        cin>>k>>l;
        if(findset(k)==findset(l))
        cout<<"Yes"<<"\n";
        else
        cout<<"No"<<"\n";

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
