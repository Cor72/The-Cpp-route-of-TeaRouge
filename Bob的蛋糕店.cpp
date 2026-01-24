#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include<queue>
#include<vector>
using namespace std;
using ll=long long;
using pii=pair<int,int>;
const int N=4e5+1;
int A,B,fl,q[25];
int n,k;
bool findSubsetSum(const vector<int>& nums, int M, int K) {
    int n = nums.size();
    vector<vector<int>> dp(n + 1, vector<int>(K + 1, 0));

    for (int i = 0; i <= n; ++i) {
        dp[i][0] = 1;
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= K; ++j) {
            if (nums[i - 1] <= j) {
                dp[i][j] = dp[i - 1][j] + dp[i - 1][j - nums[i - 1]];
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    return dp[n][K] >= M;
}
void dfs(vector<int> &a,int deep,int x){
    if(deep==k+1){
        int sum=0;
        for(int i=1;i<=k;i++)
            sum+=B*a[q[i]]*q[i]-A*a[q[i]];
        if(sum==0)fl=1;
        return ;
    }
    for(int i=x;i<=n+deep-k;i++){
        q[deep]=i;
        dfs(a,deep+1,i+1);
    }
}
void solve()
{
    cin>>n>>k;
    vector<int> a(n);
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        A+=a[i]*i,B+=a[i];
    }
    dfs(a,1,1);
    if(fl)cout<<"Yes";
    else cout<<"No";

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
