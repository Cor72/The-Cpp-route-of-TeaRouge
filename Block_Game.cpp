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

void solve()
{
    int ans=-4e8+1;
    int count,m;
    cin>>count>>m;
    vector<int> a(count);
    cin>>a[0];
    for(int i=1;i<count;i++)
    {
        cin>>a[i];
        ans=max(ans,a[i]+a[i-1]);
    }
    ans=max(ans,a[count-1]+m);
    ans=max(ans,a[0]+m);
    cout<<ans<<"\n";


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;cin>>T;
    while(T--)
    solve();
    return 0;
}
