#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vll=vector<vector<ll>>;

//5
// 2/5 4/15 1/30 -2/60 8/3
void solve()
{
    int n,a,b,up,down=1;
    char c;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>c>>b;
        up=up*b+a*down;
        down*=b;
        int k=abs(__gcd(up,down));
        up/=k;down/=k;
        // cout<<up<<"/"<<down<<"\n";

    }
    if(up%down==0)
    {
        cout<<up/down<<"\n";
    }
    else
    {
        if(up/down)cout<<up/down<<' ';      /*结果大于1*/
        cout<<up-up/down*down<<'/'<<down<<endl;
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