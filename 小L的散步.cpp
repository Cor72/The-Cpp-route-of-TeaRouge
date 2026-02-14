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
    int n,m,l;
    cin>>n>>m>>l;
    vector<ll> a(n+1);
    vector<ll> b(m+1);
    for(int i=1;i<=n;i++)
    {
        int c;
        cin>>c;
        a[i]=a[i-1]+c;
        // cout<<a[i];
    }
    int len=1;
    ll pos1=0;
    ll pos2=l;
    bool ok=false;
    if(a[1]<l)
    {
        ok=true;
        goto end;
    }
    for (int i = 0; i < m; i++)
    {
        ll foot=0;
        cin>>foot;
        pos1+=foot;
        pos2+=foot;
        while(pos1>=a[len])
        {
            len++;
            if(len>n)
            goto end;
        }
        if(pos2>a[len])
        {
        ok=true;
        goto end;            
        }
    }
    
    end:
    if(ok)
    cout<<"YES";
    else
    cout<<"NO";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
