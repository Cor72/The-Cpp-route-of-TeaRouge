#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vll=vector<vector<ll>>;


void solve()
{
    int N,M;
    cin>>N>>M;
    int pos=1;
    vector<vector<int>> a(N,vector<int>());
    for(int i=0;i<N;i++)
    {
        int k;
        cin>>k;
        a[i].resize(k);
        for(int j=0;j<k;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<M;i++)
    {
        int x;cin>>x;
        if(x==0)
        {
            pos=a[pos-1][x-1];
        }
        else if(x==1)
        {
            pos=x;
        }
        else
        {
            
        }
    }

    


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