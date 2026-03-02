#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vll=vector<vector<ll>>;
const int N=4e5+1;const int MOD=998244353;

void solve()
{
    int n,l,r;
    cin>>n>>l>>r;
    vector<int> a(n+1);
    vector<int> b;
    vector<int> c;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(i>=l&&i<=r)
        {
            b.push_back(a[i]);
        }
        else
        {
            c.push_back(a[i]);
        }
    }
    auto it=min_element(b.begin(),b.end());
    int min_pos=it-b.begin();
    int k=l;
    for(int i=min_pos;i<b.size();i++)
    {
        a[k]=b[i];
        k++;
    }
    for(int i=0;i<min_pos;i++)
    {
        a[k]=b[i];
        k++;
    }
    // int j=0;
    // for(;j<c.size();j++)
    // {
    //     if(c[j]<a[l])
    //     cout<<c[j]<<" ";
    //     else
    //     {
    //         for(int i=l;i<=r;i++)
    //         {
    //             cout<<a[i]<<" ";
    //         }
    //         break;
    //     }
    // }
    // for(;j<c.size();j++)
    // {
    //     cout<<c[j]<<" ";
    // }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";




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
