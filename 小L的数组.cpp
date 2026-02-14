#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include<queue>
#include<vector>
#include<map>
using namespace std;
using ll=long long;
using pii=pair<int,int>;
const ll N=4e5+1;
const ll X=0;

void solve()
{
    int n;
    cin>>n;
    vector<int> a(n+1);
    vector<int> b(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
    }
    vector<vector<bool>> dp(3000,vector<bool>(3000));
    dp[0][0]=true;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < 2049; j++)
        {
            if(dp[i-1][j])
            {
                ll c1=j;
                ll c2=j;
                c1=max(X,c1-a[i]);
                c2=c2^b[i];
                if(c1<=2048)
                {
                    dp[i][c1]=true;
                }
                if(c2<=2048)
                {
                    dp[i][c2]=true;
                }
            }
        }
        
    }
    int ans = 0;
    for (int v=2048;v>=0;v--) {
        if (dp[n][v]) {
            ans = v;
            break;
        }
    }

    cout<<ans<<endl;
    


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
