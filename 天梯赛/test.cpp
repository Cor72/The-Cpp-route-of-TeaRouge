#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vll=vector<vector<ll>>;
const int N=4e5+1;const int MOD=998244353;

void solve()
{
    int N,M;
    cin>>N>>M;
    map<vector<int>,int> mp;
    for(int i=0;i<N;i++)
    {
        vector<int> v(M);
        for(int j=0;j<M;j++) cin>>v[j];
        mp[v]++;
    }

    cout<<mp.size()<<"\n";

    vector<pair<vector<int>, int>> a;

    for(auto& p : mp)
    {
        a.push_back({p.first, p.second});
    }
    sort(a.begin(), a.end(), [](const auto& a, const auto& b){
        if (a.second != b.second) {
            return a.second > b.second;
        }
        return a.first < b.first;
    });


    // cout << a.size() << "\n"; 
    for(const auto& i:a)
    {
        cout<<i.second<<" ";
        for(auto j: i.first)
        {
            cout<<j;
            if(j!=i.first.back())
            cout<<" ";
        }
        // cout<<"\n";
        cout<<"\n";
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