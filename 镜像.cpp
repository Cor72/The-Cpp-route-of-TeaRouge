#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include<queue>
#include<vector>
#include<map>
#include<iomanip>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vll=vector<vector<ll>>;
const int N=4e5+1;

void solve()
{
    int a,b,k;
    cin>>a>>b>>k;
    vector<int> let(1e6+1,-1);
    queue<pair<int,int>> q;
    q.push({a,0});
    let[a]=0;
    while(!q.empty())
    {
        pair<int,int> p=q.front();
        // cout<<p.first;
        q.pop();
        if(p.first%10){
        int tt=0,ttt=p.first;
        while(ttt){
            tt=(tt*10+ttt%10);
            ttt/=10;
        }
        if(let[tt]==-1||let[tt]>p.second+1)
        {
            let[tt]=p.second+1;
            q.push({tt,p.second+1});
        }
        }
        if(p.first+k<=1e6)
        {
            if(let[p.first+k]==-1||let[p.first+k]>p.second+1)
            {
                let[p.first+k]=p.second+1;
                q.push({p.first+k,p.second+1});
            }
        }
    }
    cout<<let[b]<<"\n";

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
