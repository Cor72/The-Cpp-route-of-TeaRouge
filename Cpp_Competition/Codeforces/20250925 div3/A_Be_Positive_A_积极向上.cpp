#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;

void solve()
{
    
    
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int zero=0;
        int fuone=0;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0)
            zero++;
            else if(a[i]==-1)
            fuone++;
        }
        if(fuone&1)
        {
            cout<<zero+2<<"\n";
        }
        else
        {
            cout<<zero<<"\n";
        }


    }
    return 0;
}