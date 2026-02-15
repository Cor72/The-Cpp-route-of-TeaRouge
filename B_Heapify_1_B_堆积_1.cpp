#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include<queue>
#include<vector>
#include<map>
#include<iomanip>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vii=vector<vector<int>>;
const int N=4e5+1;

void solve()
{
    int n;
    cin>>n;
    // cout<<n;
    vector<ll> a(n+1);
    vector<ll> an(n+1);
    vector<ll> tem,num;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        an[i]=a[i];
        // cout<<a[i]<<" ";
    }
    vector<bool> b(n+1,0);
    for (int i = 1; i <= n; i++)
    {
        if(b[i])
        continue;
        tem.clear();
        num.clear();
        for(int j = i;j<=n;j*=2)
        {
            tem.push_back(a[j]);
            num.push_back(j);
            b[j]=1;
        }
        sort(tem.begin(),tem.end());
        for (int j=0; j<num.size();j++)
        {
            a[num[j]]=tem[j];
        }
    }
    sort(an.begin(),an.end());
    if(a==an)
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";
    

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
