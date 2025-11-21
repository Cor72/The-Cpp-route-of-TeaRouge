#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;

void solve()
{
    int n,m;
    cin>>n>>m;
    int sum;
    vector<int> a(n);
    unordered_map<int,int> b;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[a[i]]++;
        a[i]-=m;
    }
    for(int c:a)
    {
        sum+=b[c];
    }
    cout<<sum;

    

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}