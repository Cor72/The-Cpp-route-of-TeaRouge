#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;

void solve()
{
    int n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    vector<int> a(26);
    for(char m:s){a[m-'a']++;}
    for(char n:t){a[n-'a']--;}
    for(int i=0;i<=25;i++)
    {
        if(a[i]!=0)
        {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;cin>>T;
    while(T--)solve();
    return 0;
}