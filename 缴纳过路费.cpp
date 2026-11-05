#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;
using vii=vector<int>;
const int N=1e9+7;const int MOD=998244353;
int maxn;
vector<int> s,sz;

void init_set(){
    s.resize(maxn+1);
    sz.resize(maxn+1,1);
    for(int i=1;i<=maxn;i++){
        s[i]=i;
    }
}
int find_set(int x){
    return x==s[x]?x:s[x]=find_set(s[x]);
}

struct edge{
    int u,v;ll w;
};

void solve()
{
    int n,m,l,r;
    cin>>n>>m>>l>>r;

    vector<edge> edges(m);
    for(int i=0;i<m;i++){
        cin>>edges[i].u>>edges[i].v>>edges[i].w;
    }
    sort(edges.begin(), edges.end(),[](edge &a,edge &b){
        return a.w<b.w;
    });
    maxn=n;
    init_set();
    ll lo=0;ll mo=0;
    int i=0;
    while(i<m && edges[i].w<l)
    {
        int u=find_set(edges[i].u);
        int v=find_set(edges[i].v);
        if(u!=v)
        {
            lo+=sz[u]*sz[v]*1LL;
            if(sz[u] <sz[v]) swap(u,v);

            s[v]=u;
            sz[u]+=sz[v];
        }
        i++;
    }
    mo=lo;
    while(i<m && edges[i].w<=r)
    {
        int u=find_set(edges[i].u);
        int v=find_set(edges[i].v);
        if(u!=v)
        {
            mo+=1LL*sz[u]*sz[v];
            if(sz[u] <sz[v]) swap(u,v);

            s[v]=u;
            sz[u]+=sz[v];
        }
        i++;
    }
    cout<<mo-lo<<"\n";



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
