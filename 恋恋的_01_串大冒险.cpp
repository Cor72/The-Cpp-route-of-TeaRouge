#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;
using vii=vector<int>;
const int N=1e9+7;const int MOD=998244353;

void solve()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    // vector<int> a(n);

    vector<int> ans(n+1);
    int ze=0;
    int check=0;
    for(int i=1;i<=n;i++)
    {
        if(s[i-1]=='0')
        {
            ze++;
            if(ze%k==0)
            check++;
        }
        else
        {
            ze=0;
        }
        ans[i]=check;
    }

    int len=0;
    for(int i=0;i<=n;i++)
    {
        while(len<n&&ans[len+1]<=i)
        len++;
        cout<<len<<" ";
    }



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
