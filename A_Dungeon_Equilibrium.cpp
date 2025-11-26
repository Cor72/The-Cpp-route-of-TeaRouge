#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;

void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    unordered_map<int,int> b;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[a[i]]++;
    }
    int sum =0;
    for (auto [c, v] : b) 
    {
    if(c!=v)
    {
        if(c>v)
        {
            sum+=v;
        }
        else
        {
            sum+=(v-c);
        }
    }
    }
    cout<<sum<<"\n";

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;cin>>T;
    while(T--)solve();
    return 0;
}