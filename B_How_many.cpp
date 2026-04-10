#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vll=vector<vector<ll>>;
const int N=4e5+1;const int MOD=998244353;

void solve()
{
    int S,T;
    cin>>S>>T;
    int ans=0;
    for(int a=0;a<=S;a++)
    {
        for(int b=0;a+b<=S;b++)
        {
            for(int c=0;a+b+c<=S;c++)
            {
                if(a*b*c<=T)
                {
                    ans++;
                }
            }
        }
    }
    cout<<ans<<"\n";



}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
