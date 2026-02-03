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
const int N=-4e5+1;

void solve()
{
    ll count;
    cin>>count;
    if(count==1)
    {
        int tmp;cin>>tmp;cout<<tmp<<"\n";return;
    }
    vector<ll> a(count);
    ll tmp=0;
    for(int i=0;i<count;i++)
    {
        cin>>a[i];
        tmp=max(tmp,a[i]);
    }
    ll ans=tmp*(count-2)+a[0]+a[count-1];
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
