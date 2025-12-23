#include<iostream>
#include<string>
#include<vector>
using namespace std;
using ll=long long;
using pii=pair<int,int>;

int nodes[150];

void solve()
{
    int n,m;
    cin>>n>>m; 
    for (int i = 0; i <=n-1; i++)
    {
        nodes[i]=i+1;
    }
        nodes[n]=1;
        int now =1;int prev=1;
        while((n--)>1)
        {
           for(int i=1;i<m;i++)
           {
            prev=now;now=nodes[now];
           } 
           cout<<now<<" ";
           nodes[prev]=nodes[now];
           now=nodes[prev];
        }
        cout<<now;
}
    



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
