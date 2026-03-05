#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;

void solve()
{
    int n;
    cin>>n;
    for(int i=n-1;i>=0;i--)
    {
        int c=n-1-i;
        for(int j=0;j<c;j++)
        cout<<" ";
        for(int j=0;j<i;j++)
        cout<<"*";
        cout<<"*";
        for(int j=0;j<i;j++)
        cout<<"*";
        cout<<"\n";
    }
    for(int i=0;i<=n-1;i++)
    {
        int c=n-1-i;
        for(int j=0;j<c;j++)
        cout<<" ";
        for(int j=0;j<i;j++)
        cout<<"*";
        cout<<"*";
        for(int j=0;j<i;j++)
        cout<<"*";
        cout<<"\n";
    }    
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}