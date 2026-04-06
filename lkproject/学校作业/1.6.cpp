#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vll=vector<vector<ll>>;
const int N=4e5+1;const int MOD=998244353;

void solve()
{
    int n;
    cin>>n;
    int space=0;
    int stars=n;
    for(int i=0;i<n/2+1;i++)
    {
        cout << string(space, ' ') << string(stars, '*') << '\n';        
        space++;
        stars-=2;
    }
        space--;
        stars+=2;
    for(int i=0;i<n/2;i++)
    {
        space--;
        stars+=2;
        cout << string(space, ' ') << string(stars, '*') << '\n';        

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