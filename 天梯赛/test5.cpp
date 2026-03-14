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

    vector<vector<int>> b(11,vector<int>(11,-1));
    vector<int> c(10,0);
    for(int i=0;i<M;i++)
    {
        cin>>c[i];
    }
    for(int i=0;i<M;i++)
    {
        for(int j=0;j<10;j++)
        {
            cin>>b[c[i]][j];
            // cout<<b[c[i]][j]<<" ";
        }
        // cout<<"\n";
    }
    int t;cin>>t;
    for(int i=0;i<t;i++)
    {
        string s;cin>>s;
        if(s.size()==1)
        {
            cout<<"?"<<"\n";
            continue;
        }
        if(b[s[0]-'0'][s[1]-'0']!=-1)
        {
        cout<<a[b[s[0]-'0'][s[1]-'0']-1].second<<"\n";
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