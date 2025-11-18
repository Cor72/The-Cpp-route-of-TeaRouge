#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;

void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int> a(n+1);
    int p=1;
    for (int i = 1; i <= n; i++)
    {
        a.push_back(i);
    }
    for(int i=1;i<=m;i++){
        int t=i*i*i%5+1;
        p+=t;
        if(p>n)
        p=t+1;
        if(i!=m)
        {
        a.erase(a.begin()+p-1);
        }
    }
    cout<<a[p-1];
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}