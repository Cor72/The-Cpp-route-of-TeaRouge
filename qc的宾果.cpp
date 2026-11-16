#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;
using vii=vector<int>;
const int N=1e9+7;const int MOD=998244353;

void solve()
{
    int l,r,leng;
    cin>>leng>>l>>r;
    unordered_set<int> s;
    vector<int> v;
    for(int i=0;i<=leng;i+=l)
    {
        s.insert(i);
    }
    for(int i=leng;i>=0;i-=r){
        if(s.count(i)){
            v.push_back(i);
        }
    }
    cout<<v.size();


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // int T;cin>>T;
    // while(T--)
    solve();
    return 0;
}
