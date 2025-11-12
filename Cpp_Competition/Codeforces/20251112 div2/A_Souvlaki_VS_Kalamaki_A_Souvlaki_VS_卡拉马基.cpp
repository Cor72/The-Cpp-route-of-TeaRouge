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
    if(a.size()<=2)
    {
        cout<<"YES"<<"\n";
        return;
    }
    sort(a.begin(),a.end());
    if(a.size()&1){;}
    else
    {
        n--;
    }
    for(int i=1;i<n;i+=2)
    {
        if(a[i]!=a[i+1])
        {
            cout<<"NO"<<"\n";
            return;
        }
    }
    cout<<"YES"<<"\n";
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