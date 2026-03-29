#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vll=vector<vector<ll>>;
const int N=4e5+1;const int MOD=998244353;

/*4 2
5 3
A 123456789012345670 1 13:58
B 123456789012345671 0 13:58
C 12345678901234567 0 13:22
D 123456789012345672 0 03:24
C 123456789012345673 0 13:59
4 3
A 123456789012345670 1 13:58
E 123456789012345674 0 13:59
C 123456789012345673 0 13:59
F F 0 14:00
1 3
E 123456789012345674 1 13:58
1 1
A 123456789012345670 0 14:11*/
struct human
{
    /* data */
    char name;
    string id;
    int in;
    int time;
};


void solve()
{
    int n,p;cin>>n>>p;
    int i=n*10000;
    vector<human> v;
    while(n--)
    {
        int t,s;cin>>t>>s;
        for(int j=0;j<t;j++)
        {
            char x1;string x2;int x3;int x4;char x5;int x6;
            cin>>x1>>x2>>x3>>x4>>x5>>x6;
            int ti=x4*100+x6+i;
            if(x2.size()!=18)
            {
                continue;
            }
            v.push_back({x1,x2,x3,ti});
        }

        
        i-=10000;
    }

    sort(v.rbegin(),v.rend(),[](human a,human b){return a.time<b.time;});
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].name<<" "<<v[i].id<<" "<<v[i].in<<" "<<v[i].time<<endl;

    }
    int ans=0;


    


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}