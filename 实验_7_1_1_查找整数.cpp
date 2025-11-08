#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int l=0;int r=n-1;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(a[mid]==k)
        {
            cout<<mid;
            return;
        }
        else if(k<a[mid])
        r=mid-1;
        else
        l=mid+1;
    }
    cout<<"Not Found";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}