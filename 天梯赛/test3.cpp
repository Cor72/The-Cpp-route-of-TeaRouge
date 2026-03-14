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
    int cnt=0;
    int maxn=0;
    vector<int> a(n+1);
    stack<int> s1;
    stack<int> s2;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(s1.empty()||a[i]<s1.top())
        {
            s1.push(a[i]);
        }
        else
        {
            if(s2.empty()||a[i]>s2.top())
            {
                s2.push(a[i]);
            }
            else
            {
                if(!s1.empty())
                {
                    int x=s1.size();
                    // cout<<x<<"\n";
                    maxn=max(maxn,x);
                    cnt++;
                }
                while(!s1.empty()) s1.pop();
                while(!s2.empty()&&s2.top()>a[i])
                {
                    s1.push(s2.top());
                    s2.pop();
                }
                s1.push(a[i]);
            }
        }
    }
    if(!s1.empty())
    {
        int x=s1.size();
        maxn=max(maxn,x);
        cnt++;
    }
    if(!s2.empty())
    {
        int x=s2.size();
        maxn=max(maxn,x);
        cnt++;
    }
    cout<<cnt<<" "<<maxn<<"\n";
    


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}