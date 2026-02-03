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
int n,m,x,y;
int dx[8]={2,1,-1,-2,-1,-2,1,2};
int dy[8]={1,2,2,1,-2,-1,-2,-1};
deque<int> q1;
deque<int> q2;
int arr[N][N];

void solve()
{
    for (int i = 0; i < 8; i++)
    {
        int a=q1.front()+dx[i];int b=q2.front()+dy[i];
        if(a<=n&&a>0&&b<=m&&b>0&&arr[a][b]==-1)
    }
    


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m>>x>>y;
    q1.push_back(x);
    q2.push_back(y);
    solve();
    return 0;
}
