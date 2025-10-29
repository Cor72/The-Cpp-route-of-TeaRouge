#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;

void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bool oddt=true,oddf=true;
    for(int c:a)
    {
        if(c&1)
        oddf=false;
        else
        oddt=false;
    }
    if(oddf==true||oddt==true)
    {
        for(int x:a)
        {
            cout<<x<<" ";
        }
        cout<<"\n";
    }
    else
    {
        sort(a.begin(),a.end());
        for(int x:a)
        {
            cout<<x<<" ";
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
    while(T--)solve();
    return 0;
}