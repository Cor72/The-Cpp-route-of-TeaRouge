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
    string n;
    cin>>n;
    // cout<<n<<" ";
    bool ok=false;
    for(int i=0;i<n.size();i++)
    {
        // cout<<n[i]<<" ";
        if(n[i]=='0'||n[i]=='5')
        ok=true;
        // cout<<ok;
    }
    if(ok)
    {
        cout<<"YES"<<"\n";
    }
    else
    {
        cout<<"NO"<<"\n";
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
