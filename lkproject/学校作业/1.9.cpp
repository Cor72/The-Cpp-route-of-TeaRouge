#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vll=vector<vector<ll>>;
const int N=4e5+1;const int MOD=998244353;

void solve()
{
    string s;
    getline(cin,s);
    int n=s.size();
    map<char,int> mp;
    for(int i=0;i<n;i++)
    {
        // if(s[i]>='a'&&s[i]<='z')
        mp[s[i]]++;
    }
    for(auto i:mp)
    {
        cout<<i.first<<" "<<i.second<<"\n";
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