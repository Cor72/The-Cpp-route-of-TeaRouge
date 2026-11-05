#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;
using vii=vector<int>;
const int N=1e9+7;const int MOD=998244353;

void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    string s;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>s;
    vector<int> ans(n);
    ans[0]=a[0];
    int pos=0;
    for(int i=1;i<n;i++)
    {
        if(s[i]!=s[i-1])
        {
            ans[i]=a[i]+ans[i-1];
            pos=i;
        }
        else
        {
            for(int j=pos;j<i;j++)
            {
                if((s[j]+s[i])%2==0) continue;
                ans[i]=max(a[i]+ans[j],ans[i-1]);
            }
        }
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
