#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include<queue>
#include<vector>
using namespace std;
using ll=long long;
using pii=pair<int,int>;
const int N=-4e5+1;

void solve()
{
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<"YES"<<"\n"<<1<<"\n";
    }
    else if(n==3)
        cout<<"YES"<<"\n"<<1<<" "<<2<<" "<<3<<" "<<"\n";
    else
        cout<<"NO"<<"\n";

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
