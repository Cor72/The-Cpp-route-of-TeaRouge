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
        int a,b,c;
        cin>>a>>b>>c;
        int A=a&b;
        int B=b&c;
        int C=c&a;
        if(A==B&&B==C&&C==A)
        {
            cout<<"YES"<<"\n";
        }
        else
        cout<<"NO"<<"\n";

    }
    return 0;
}