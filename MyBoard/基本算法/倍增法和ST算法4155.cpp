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
int n,m;
struct warrior{
    int id,L,R;
    bool operator<(const warrior b) const{return L<b.L;}
}w[N*2];
int n2;
int go[N][20];
int res[N];
void solve()
{
    int nxt=1;
    for(int i=1;i<=n2;i++){
        while(nxt<=n2&&w[nxt].L<=w[i].R)
        nxt++;
    go[i][0]=nxt-1;
    }
    for(int i=1;(1<<i)<=n;i++)
    {
        for(int s=1;s<=n2;s++)
        {
            go[s][i]=go[go[s][i-1]][i-1];
        }
    }
}
void getans(int x)
{
    int len=w[x].L+m,cur=x,ans=1;
    for (int i = log2(N); i >=0; i--)
    {
        int pos=go[cur][i];
        if(pos&&w[pos].R<len)
        {
            ans+=1<<i;
            cur=pos;
        }
    }
    res[w[x].id]=ans+1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        w[i].id=i;
        scanf("%d%d",&w[i].L,&w[i].R);
        if(w[i].R<w[i].L)
        {
            w[i].R+=m;
        }
    }
    sort(w+1,w+n+1);
    n2=n;
    for(int i=1;i<=n;i++)
    {
        n2++;
        w[n2]=w[i];
        w[n2].L=w[i].L+m;
        w[n2].R=w[i].R+m;
    }
    solve();
    for (int i = 1; i <= n; i++)
    {
        getans(i);
    }
    for (int i = 1; i <= n; i++)
    {
        printf("%d ",res[i]);
    }    
    return 0;
}
