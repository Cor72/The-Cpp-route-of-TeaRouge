#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include<queue>
#include<vector>
#include<map>
using namespace std;
using ll=long long;
using pii=pair<int,int>;
const int N=4e5+1;

void solve()
{
    int m,n;
    cin>>m>>n;
    for (int i = 1; i <= m; i++)
    {
        bool ok=true;
        if(i%2==0)
        ok=false;
        for (int j = 1; j <=n; j++)
        {
            if(ok)
            {cout<<"/";ok=false;}
            else
            {cout<<"\\";ok=true;}
        }
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
