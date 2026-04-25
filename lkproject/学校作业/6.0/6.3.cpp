#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vll=vector<vector<ll>>;
const int N=4e5+1;const int MOD=998244353;
void solve()
{
    int m,n;
    cin>>m>>n;
    auto swap=[&](int i,int j)->void{
        int tmp=m;
        m=n;
        n=tmp;
    };
    swap(m,n);
    cout<<m<<" "<<n<<"\n";


    


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}