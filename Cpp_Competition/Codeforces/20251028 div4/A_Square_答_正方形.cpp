#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;

void solve()
{
    vector<int> a(4);
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }
    for(int j=1;j<=3;j++)
    {
        if(a[j]!=a[j-1])
        {
        cout<<"NO\n";
        return;
        }
    }
    cout<<"YES\n";
    return;

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