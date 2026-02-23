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
    int n,m;
    cin>>n>>m;
    ll o=0;ll l=0;
    string arr[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]=='0')
            o++;
            else
            l++;
            // cout<<arr[i][j]<<" ";
        }        
    }
    // cout<<"\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]=='0')
            {
                if(o>=2)
                cout<<"Y";
                else
                cout<<"N";
            }
            else
            {
                if(arr[i][j]=='1')
                if(l>=2)
                cout<<"Y";
                else
                cout<<"N";
            }
        }
        cout<<"\n";
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
