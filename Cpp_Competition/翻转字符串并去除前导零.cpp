#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include<queue>
#include<vector>
using namespace std;
using ll=long long;
using pii=pair<int,int>;
const int N=4e5+1;
ll r,l;
ll zeroo(ll x)
{
    string s = to_string(x);
    reverse(s.begin(), s.end());
    size_t pos = s.find_first_not_of('0');
    if (pos == string::npos)
    return 0;
    return stoll(s.substr(pos));
}
void solve()
{
    cin>>l>>r;
    auto t=to_string(r);
    if(l==r)
    {
        cout<<zeroo(r)<<"\n";
        return;
    }
    if(count(t.begin(),t.end(),'0')==t.size()-1&&t[0]=='1')
    {
        cout<<r-1<<"\n";
        return;
    }
    ll ans=stoll('1'+string(t.size()-1,'0'));
    ans=max(ans,l);
    auto s=to_string(ans);
    for (int i = t.size()-1; i>=0; i--)
    {
        while(true)
        {
            s[i]++;
            // cout<<(stoll(s))<<"\n";
            // cout<<s[i]<<"\n";
            // cout<<r<<"\n";
            if(s[i]>'9'||(stoll(s))>r)
            {
                s[i]--;
                // cout<<"yes"<<"\n";
                break;
            }
        }
    }
    ll as=stoll(s);
    cout<<zeroo(as)<<"\n";
    

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
