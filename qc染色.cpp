#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;
using vii=vector<int>;
const int N=1e9+7;const int MOD=998244353;

struct tree{
    int n;
    vector<vector<int>> ver;
    tree(int n){
        this->n=n;
        ver.resize(n+1);
    }
    void add(int u,int v)
    {
        ver[u].push_back(v);
        ver[v].push_back(u);
    }
};
void solve()
{
    int n;
    cin>>n;
    if(n==1){
        cout<<1<<'\n';
        return;
    }
    vector<int> a(n+1);
    for(int i=1;i<n+1;i++)
    {
        cin>>a[i];
    }
    tree t(n);
    for(int i=0;i<n-1;i++)
    {
        int u,v;
        cin>>u>>v;
        t.add(u,v);
    }
    unordered_set<int> seen;
    int ans = 0;

    function<void(int,int)> dfs = [&](int u, int fa) {
        if (t.ver[u].size() == 1) {
            if (!seen.count(a[u])) {
                seen.insert(a[u]);
                ans++;
            }
        }
        for (auto v : t.ver[u]) {
            if (v == fa) continue;
            dfs(v, u);
        }
    };
    dfs(1, -1);
    cout<<ans<<'\n';

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
