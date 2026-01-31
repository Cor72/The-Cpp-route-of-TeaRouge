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
vector<vector<int>> a(21,vector<int>(5,0));
vector<int> s(5);
int l=0;
int r=0;
int an=N;
int ans=0;
void search(int x,int y)
{
    if(x>s[y])
    {
        an=min(an,max(l,r));
        return;
    }
    l+=a[x][y];
    search(x+1,y);
    l-=a[x][y];
    r+=a[x][y];
    search(x+1,y);
    r-=a[x][y];
}
void solve()
{
    cin>>s[0]>>s[1]>>s[2]>>s[3];
    for(int i=0;i<4;i++)
    {
        an=N;
        l=r=0;
        for(int j=1;j<=s[i];j++)
        {
            cin>>a[j][i];
        }
        search(1,i);
        ans+=an;
    }
    cout<<ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
