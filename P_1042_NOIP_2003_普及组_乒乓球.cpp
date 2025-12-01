#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;

ll gcd(ll a,ll b)

{

if(b==0)return a;

else return gcd(b,a%b);

}

void solve()
{
    ll a,b,c,d;
    char n,k,m;
    cin>>a>>n>>b>>k>>c>>m>>d;
    ll p=0,q=0;
    if(b==0||d==0)
    {
        cout<<"ERR"<<'\n';
        return;
    }
    if(k=='+')
    {
        p=a*d+b*c;
        q=b*d;
    }
    else if(k=='-')
    {
        p=a*d-b*c;
        q=b*d;
    }
    else if(k=='*')
    {
        p=a*c;
        q=b*d;
    }
    else if(k=='/')
    {
        p=a*d;
        q=b*c;
    }
    ll g=gcd(abs(p),abs(q));
    p/=g;
    q/=g;
    if(q<0)
    {
        p=-p;
        q=-q;
    }
    if(q==0)
    cout<<"ERR"<<'\n';
    else if(p==0)
    cout<<0<<'/'<<1<<'\n';
    else
    cout<<p<<'/'<<q<<'\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T=0;
    cin >> T;
    while (T--)
    solve();
    return 0;
}


