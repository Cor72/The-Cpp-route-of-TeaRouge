#include<iostream>
#include<string>
#include<vector>
using namespace std;
using ll=long long;
using pii=pair<int,int>;

const int N =105;
struct node
{
    int id;
    int preid,nextid;
}nodes[N];
void solve()
{
    int n,m;
    cin>>n>>m;
    nodes[0].nextid=1;
    for(int i=1;i<=n;i++)
    {
        nodes[i].id=i;nodes[i].nextid=i+1;nodes[i].preid=i-1;
    }
    nodes[n].nextid=1;
    nodes[1].preid=n;
    int now=1;
    while((n--)>1)
    {
        for(int i=1;i<m;i++){now=nodes[now].nextid;}
        cout<<nodes[now].id<<" ";
        int prev=nodes[now].preid,next=nodes[now].nextid;
        nodes[next].preid=nodes[now].preid;
        nodes[prev].nextid=nodes[now].nextid;
        now=next;
    }
    cout<<nodes[now].nextid;
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
