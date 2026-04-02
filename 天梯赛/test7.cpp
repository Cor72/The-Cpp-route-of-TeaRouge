#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vll=vector<vector<ll>>;
const int MAX_N=4e5+1; const int MOD=998244353;

void solve()
{
    int n, m; // 避免与全局常量 N 重名
    cin >> n >> m;
    map<vector<int>, int> mp;
    for(int i=0; i<n; i++)
    {
        vector<int> v(m);
        for(int j=0; j<m; j++) cin >> v[j];
        mp[v]++;
    }
    cout << mp.size() << "\n";
    
    // 修复：将 map 内容拷贝到 vector 中
    vector<pair<const vector<int>, int>> vec(mp.begin(), mp.end());
    
    // 修复：对 vector 排序，lambda 参数使用 const auto& 引用 pair
    sort(vec.begin(), vec.end(), [](const auto& a, const auto& b){
        return a.second > b.second;
    });

    for(const auto& i : vec)
    {
        cout << i.second << " ";
        for(auto j : i.first)
        {
            cout << j << " ";
        }
        cout << "\n";
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