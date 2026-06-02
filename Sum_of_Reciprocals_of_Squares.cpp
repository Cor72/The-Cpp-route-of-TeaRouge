#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;
using vii=vector<int>;
const int N=1e9+7;const int MOD=998244353;

void solve()
{
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<"Yes"<<"\n";
        cout<<"1"<<"\n";
        return;
    }
    else if(n==2||n==3||n==5)
    {
        cout<<"No"<<"\n";
        return;
    }
    vector<int> arr={2,2,2,2};
    while(arr.size()<n)
    {
        int len=arr.size();
        int diff=n-len;
        if(diff>=3)
        {
            int val =arr.back();
            arr.pop_back();
            int nval=val*2;
            arr.insert(arr.end(),4,nval);
        }
        else
        {
            int val =arr.back();
            arr.pop_back();
            int nval=val*3/2;
            arr.insert(arr.end(),9,nval);
        }
    }
    cout<<"Yes"<<"\n";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<"\n";
    


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