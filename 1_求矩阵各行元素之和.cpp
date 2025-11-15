#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;

int n;
void solve(int n)
{
    ll sum =0;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    cout<<sum<<"\n";

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;cin>>T;cin>>n;
    while(T--)solve(n);
    return 0;
}