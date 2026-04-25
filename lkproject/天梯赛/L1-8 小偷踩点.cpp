#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vll=vector<vector<ll>>;

void solve()
{
    int N,M;
    cin>>N>>M;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    // cout<<"yeah\n";
    vector<pair<int,string>> a(N);
    for(int i=0;i<N;i++)
    {
        a[i].first=i;
        getline(cin,a[i].second);
        // cout<<a[i].second<<"\n";
    }
    //int n;char x;
    // cin>>n>>x;
    // cin.ignore(numeric_limits<streamsize>::max(), '\n');
    // // string sa;
    // // getline(cin,sa);
    // string s;
    // getline(cin,s);
    // cout<<s<<"\n";

    vector<int> b[110];
    vector<int> c;
    for(int i=0;i<M;i++)
    {
        int x;cin>>x;
        c.push_back(x);
    }
    for(int i:c)
    {
        for(int j=0;j<10;j++)
        {
            int k;
            cin>>k;
            b[i].push_back(k);
            // cout<<b[c[i]][j]<<" ";
        }
        // cout<<"\n";
    }
    int t;cin>>t;
    for(int i=0;i<t;i++)
    {
        int s;cin>>s;
        int x=s/10;
        int y=s%10;
        int num=b[x][y];
        // cout<<num<<"\n";
        if(num!=-1)
        {
        cout<<a[num-1].second<<"\n";
        // cout<<b[s[0]-'0'][s[1]-'0']<<"\n";
        }
        else
        {
            cout<<"?"<<"\n";
        }
    // cout<<s<<"\n";
    }


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}