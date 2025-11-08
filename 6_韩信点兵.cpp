#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;

void solve()
{
    int m,n;
    cin>>m>>n;
    for(int i=m;i<=n;i++)
    {
    if(i%3==2&&i%5==3&&i%7==2)
    {
        cout<<i;
        return;
    }
    }
    cout<<"no";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}