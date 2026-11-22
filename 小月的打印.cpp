#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;
using vii=vector<int>;
const int N=1e9+7;const int MOD=998244353;

void solve()
{
    int n;string s;
    cin>>n;
    cin>>s;
    vector<char> a(n,' ');
    int pos=0;
    int dir=1;
    for(char c:s)
    {
        a[pos] = c;
        int nextp=pos+dir;
        if(nextp>=0&&nextp<n)
        {
            pos=nextp;
        }
        else
        {
            dir=-dir;
        }
    }

    for(char c:a){
        cout<<c;
    }
    cout<<'\n';
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
