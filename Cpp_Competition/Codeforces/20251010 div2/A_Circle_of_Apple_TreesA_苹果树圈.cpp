#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;

void solve()
{
    
    
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> b(n);
        for (int i = 0; i < n; ++i) cin >> b[i];
        unordered_set<int> nums(b.begin(),b.end());
        cout << nums.size() << '\n';
    }
    return 0;
}