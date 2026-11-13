#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;
using vii=vector<int>;
const int N=1e9+7;const int MOD=998244353;

void solve()
{
    int n;
    cin >> n;
    stringstream out[2];
    ll freeAt[2] = {0,0};
    for (int i=0;i<n;i++){
        ll id,t;
        cin>>id>>t;
        int c=(freeAt[0]<=freeAt[1])?0:1;
        ll wait = freeAt[c];
        out[c]<<id<<' '<<t<<' '<<wait<<'\n';
        freeAt[c]+=t;
    }
    for (int c=0;c<2;++c){
        cout<<"counter "<<c+1<<'\n'<<out[c].str();
    }


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //int T;cin>>T;
    //while(T--)
    solve();
    return 0;
}