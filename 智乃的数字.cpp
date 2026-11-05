#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;
using vii=vector<int>;
const int N=1e9+7;const int MOD=998244353;

void solve()
{
    vector<int> a;
    for(int i=3;i<=9000000;i+=2)
    {
        // if(i&1){
            string num=to_string(i);
            if(i%10==5 || accumulate(num.begin(), num.end(), 0) % 3 == 0){
                a.push_back(i);
            }
        // }
    }
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int tmp;cin>>tmp;
        if(tmp>0 && tmp<=a.size())
        cout<<a[tmp-1]<<"\n";
        else cout<<"-1\n";
    }
    



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
