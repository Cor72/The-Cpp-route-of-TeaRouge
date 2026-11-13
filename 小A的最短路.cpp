#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;
using vii=vector<int>;
const int N=1e9+7,MOD=998244353;
struct Tree{
    int n;
    vector<vector<int>> ver, var;
    vector<int> lg,dep;
    Tree(int n){
        this->n=n;
        ver.resize(n+1);
        var.resize(n+1,vector<int>(30));
        lg.resize(n+1);
        dep.resize(n+1);
        for(int i=1;i<=n;i++){
            lg[i]=lg[i-1]+(1<<lg[i-1]==i);
        }
    }
    void add(int u,int v){
        ver[u].push_back(v);
        ver[v].push_back(u);
    }
    void dfs(int u,int fa){
        var[u][0]=fa;
        dep[u]=dep[fa]+1;
        for(int i=1;i<=lg[n];i++){
            var[u][i]=var[var[u][i-1]][i-1];
        }
        for(int v:ver[u]){
            if(v==fa) continue;
            dfs(v,u);
        }
    }
    int lac(int u,int v){
        if(dep[u]<dep[v]) swap(u,v);
        for(int i=lg[n];i>=0;i--){
            if(dep[var[u][i]]>=dep[v]) u=var[u][i];
        }
        if(u==v) return u;
        for(int i=lg[dep[u]]-1;i>=0;i--){
            if(var[u][i]!=var[v][i])
            u=var[u][i],
            v=var[v][i];
        }
        return var[u][0];
    }
    int clac(int u,int v){
        return dep[u]+dep[v]-2*dep[lac(u,v)];
    }
    void init(){
        dfs(1,0);
    }
    int dis(int x, int y) {
    return dep[x] + dep[y] - 2 * dep[lac(x, y)];
    }

};


void solve()
{
    int u,v;
    int nl;cin>>nl;
    Tree tr(nl);
    for(int i=0;i<nl-1;i++){
        cin>>u>>v;
        tr.add(u,v);
    }
    cin>>u>>v;
    tr.init();
    int q;cin>>q;
    while(q--){
        int x,y;
        cin>>x>>y;
        cout<<min({tr.dis(x,y),tr.dis(x,u)+tr.dis(y,v),tr.dis(y,u)+tr.dis(x,v)})<<'\n'; 

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