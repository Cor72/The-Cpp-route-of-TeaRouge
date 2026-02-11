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
int n,m,q;
int dx[13]={0,1,0,-1,0,1,1,-1,-1,2,0,-2,0};
int dy[13]={0,0,1,0,-1,1,-1,1,-1,2,0,-2,0};
deque<int> q1;
deque<int> q2;
void solve()
{
    vector<vector<int>> arr(n+2,vector<int>(m+2,-1));
    arr[x][y]=0;
    while(!q1.empty()){
    for (int i = 0; i < 8; i++)
    {
        int a=q1.front()+dx[i];int b=q2.front()+dy[i];
        // cout<<a<<" "<<b<<" "<<"\n";
        if(a<=n&&a>0&&b<=m&&b>0&&arr[a][b]==-1)
        {
            // cout<<"yes";
            arr[a][b]=arr[q1.front()][q2.front()]+1;
            q1.push_back(a);
            q2.push_back(b);
        }
    }
    q1.pop_front();
    q2.pop_front();
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m>>q;
    solve();
    return 0;
}
