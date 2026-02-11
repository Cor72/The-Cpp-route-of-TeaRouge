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
const int N=4e5+1;

void solve()
{
    vector<int> sum(10);
    vector<vector<int>> a(5,vector<int>(5));
    map<int,int> cnt;
    bool ok=true;
    for (int i = 1; i <= 3; i++)
    {
        for(int j = 1; j <= 3; j++)
        {
            cin>>a[i][j];
            cnt[a[i][j]]++;
            if(cnt[a[i][j]]>=2)
            {
                ok=false;
                goto end1;
            }
            sum[i]+=a[i][j];
        }
                    // cout<<sum[i]<<" ";
    }
    for (int i = 1; i <= 3; i++)
    {
        for(int j = 1; j <= 3; j++)
        {
            sum[i+3]+=a[j][i];
        }
                    // cout<<sum[i+3]<<" ";
    }
    sum[7]=a[1][1]+a[2][2]+a[3][3];
    sum[8]=a[1][3]+a[2][2]+a[3][1];
    sum[0]=sum[1];
    // cout<<sum[7]<<" "<<sum[8];
    for (int i = 1; i <= 8; i++)
    {
        if(sum[0]!=sum[i])
        ok=false;
    }
    end1:
    if(ok)
    {
        cout<<"Yes";
    }
    else
    cout<<"No";
    



}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
