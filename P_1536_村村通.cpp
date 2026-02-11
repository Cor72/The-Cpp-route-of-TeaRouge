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
int m,n;
vector<int> a(2001);
int findd(int x)
{
    return x==a[x]?x:findd(a[x]);
}
void sett(int x,int y)
{
    x=findd(x);
    y=findd(y);
    if(x!=y)
    a[x]=a[y];
}


void solve()
{

    for(int i=1;i<=m;i++)
    {
        a[i]=i;
    }
    for(int i=0;i<n;i++)
    {
        int x=0;int y=0;
        cin>>x>>y;
        sett(x,y);
    }
    int count=0;
    for(int i=1;i<=m;i++)
    {
        if(a[i]==i)
        count++;
    }
    cout<<count-1<<"\n";

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    while(1)
    {
        m=0;n=0;
        cin>>m>>n;
        if(m==0)
        {
            break;
        }
        solve();
    }

    return 0;
}
