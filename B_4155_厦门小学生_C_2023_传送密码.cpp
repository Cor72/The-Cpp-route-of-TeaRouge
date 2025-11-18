#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;

void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int> a(6);
    vector<int> b(10001);
    for(int i=1;i<10002;i++)
    {
        n*=10;
        b[i]=n/m;
        n=n%m;
    }
    for (int j = 0; j < 6; j++)
    {
        int k;
        cin>>k;
        a[j]=b[k];
    }
    for(int c:a)
    {
        cout<<c;
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