#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;
using vii=vector<int>;
const int N=1e9+7;const int MOD=998244353;

void solve()
{
    int n,m;
    unordered_set<int> st;
    cin>>n;
    vii a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        st.insert(a[i]);
    }
    cin>>m;
    vii b(m);
    for(int i=0;i<m;i++) cin>>b[i];

    for(int i=m-1;i>=0;i--){
        if(st.count(b[i])) continue;
        cout<<b[i]<<" ";
    }
    for(int i=0;i<n;i++)
    {
        // if(st.count(a[i])) continue;
        cout<<a[i];
        cout<<" ";

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