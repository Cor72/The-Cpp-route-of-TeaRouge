#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vll=vector<vector<ll>>;
const int N=4e5+1;const int MOD=998244353;

void solve()
{
    int N,M,K;
    cin>>N>>M>>K;
    deque<int> a;
    stack<int> b;
    vector<int> c;
    for(int i=0;i<N;i++)
    {
        int xc;
        cin>>xc;
        a.push_back(xc);
    }
    int x;
    if(!b.empty())
    {
        x=b.top();
        b.pop();
    }
    else
    {
        x=a.front();
        a.pop_front();
    }
    if(x>c.back())
    {
        a.push_front(x);
        x=a.front();
        a.pop_front();
        while(x<=c.back())
        {
            b.push(x);
            x=a.front();
            a.pop_front();
        }
        if(x>c.back())
        {
            c.push_back(x);
        }
    }
    else
    {
        c.push_back(x);
    }

    


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