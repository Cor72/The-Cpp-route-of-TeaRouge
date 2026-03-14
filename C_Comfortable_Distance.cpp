#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vll=vector<vector<ll>>;
const int N=4e5+1;const int MOD=998244353;

void solve()
{
    int n,L,R;
    cin>>n>>L>>R;
    string s;
    cin>>s;
    int ans=0;
    vector<vector<int>> a(26);
    for(int i=0;i<n;i++)
    a[s[i]-'a'].push_back(i);
    ll tp=0;
    for(int i=0;i<26;i++)
    {
        vector<int>& v=a[i];
        if(v.size()<2) continue;
        int l=0;
        int r=0;
        for(int j=0;j<v.size();j++)
        {
            int pos=v[j];
            while (l < j && pos - v[l] > R) {
                l++;
            }
            if (r < l) r = l;
            while (r < j && v[r] <= pos - L) {
                r++;
            }
            if (r > l) {
                tp += (long long)(r - l);
            }
        }
    
    }
    cout << tp << endl;


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
