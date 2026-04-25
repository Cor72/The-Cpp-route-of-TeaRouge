#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vll=vector<vector<ll>>;
const int N=4e5+1;const int MOD=998244353;

void solve()
{
    int n;
    cin>>n;
    vector<string> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k=0;cin>>k;
    // cout<<k<<"\n";
    int cnt=0;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    string s;
    getline(cin,s);
    for(int i=0;i<n;i++)
    {
        size_t pos=0;
        while((pos=s.find(a[i],pos))!=string::npos)
        {
            s.replace(pos,a[i].length(),"^_^");
            pos+=3;
            cnt++;
        }
    }
    // cout<<cnt<<"\n"<<s<<"\n";
    if(cnt>=k)
    {
        cout<<cnt<<"\n";
        cout<<"He Xie Ni Quan Jia!";
    }
    else
    {
        size_t pos=0;
        while((pos=s.find("^_^",pos))!=string::npos)
        {
            s.replace(pos,3,"<censored>");
            pos+=10;
            cnt++;
        }
        // cout<<cnt<<"\n";
        cout<<s;
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