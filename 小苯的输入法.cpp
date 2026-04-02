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
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string s;
    getline(cin,s);
    // cout<<s<<"\n";
    deque<char> a;
    bool ok=true;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='!')
        {
            ok==false?ok=true:ok=false;
        }
        else if(s[i]=='-')
        {
            if(ok)
            {
                if(a.size())
                a.pop_back();
            }
            else
            {
                if(a.size())
                a.pop_front();
            }
        }
        else
        {
            if(ok)
            a.push_back(s[i]);
            else
            {
                a.push_front(s[i]);
            }
        }
    }
    if(a.size()==0)
    {
        cout<<"Empty\n";
        return;
    }
    for(auto i:a)
    {
        cout<<i;
    }
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
