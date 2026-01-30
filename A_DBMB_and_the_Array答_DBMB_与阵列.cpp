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

void solve()
{
    int count,m,n;
    cin>>count>>m>>n;
    int sum=0;
    vector<int> a(count);
    for(int i=0;i<count;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sum+=n;
    cout<<sum;
    if(sum%m==0)
    {
        cout<<"Yes"<<"\n";
    }
    else
    cout<<"No"<<"\n";



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
