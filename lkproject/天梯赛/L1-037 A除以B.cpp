#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vll=vector<vector<ll>>;
const int N=4e5+1;const int MOD=998244353;

void solve()
{
    int a,b;
    cin>>a>>b;
    cout<<a;
    cout<<"/";
    if(b<0)
        cout<<"("<<b<<")";
    else
        cout<<b;
    cout<<"=";
    if(b==0)
    {
        cout<<"Error";
        return;
    }
    double ans=(double)a/b;
    printf("%.2f",ans);
    


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}