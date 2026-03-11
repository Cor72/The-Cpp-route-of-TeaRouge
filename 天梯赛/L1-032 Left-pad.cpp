#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vll=vector<vector<ll>>;

void solve()
{
    int n;char x;
    cin>>n>>x;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string s;
    getline(cin,s);
    // cout<<s<<"\n";
    if (s.size() > n) {
        for (int i = s.size() - n; i < s.size(); i++) 
            printf("%c", s[i]);
    } else { 
        for (int i = 0; i < n - s.size(); i++) 
            printf("%c", x);
 
        for (int i = 0; i < s.size(); i++) 
            printf("%c", s[i]);
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