#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include<queue>
#include<vector>
#include<map>
using namespace std;
using ll=long long;
using pii=pair<int,int>;
const int N=4e5+1;

void solve()
{
    ll t;
    cin>>t;
    vector<int> a(t);
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
    }
    ll val=*max_element(a.begin(),a.end());
    ll ans=count(a.begin(),a.end(),val);
    map<int, int> freq;
    for (int x : a) freq[x]++;
    // cout<<freq[3];
    map<int, bool> sett;
    bool ok=true;
    for(auto it=freq.rbegin();it!=freq.rend();++it)
    {
        // cout<<it->second;
        if(ok)
        {
            if((it->second)%2==1)
            {
                // cout<<"yes"<<it->second;
                sett[it->first]=true;
                ok=false;
            }
            else
            {
                // cout<<"cu";
                sett[it->first]=false;
            }
        }
        else
        sett[it->first]=false;
    }

    for(int x:a)
    {
        cout<<(sett[x]?'1':'0');
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
