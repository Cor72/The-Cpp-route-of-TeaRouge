#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;

bool solve(vector<int>&a)
{
    for(int i=1;i<a.size();i++){
        if(a[i]<=a[i-1])
        return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<int> arr(m); 
        for (int i = 0; i < m; ++i) cin >> arr[i];
        if(!solve(arr))
        {
            cout<<1<<"\n";
        }
        else
        {
            cout<<n-arr[m-1]+1<<"\n";
        }

    }
    return 0;
}