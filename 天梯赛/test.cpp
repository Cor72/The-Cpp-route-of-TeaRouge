#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vll=vector<vector<ll>>;
const int N=4e5+1;const int MOD=998244353;

void solve()
{
    int t;
    cin>>t;
    vector<int> t1(t);
    vector<int> t2(t);
    vector<bool> t3(t,false);
    for(int i=0;i<t;i++)
    {
        cin>>t1[i]>>t2[i];
    }
    int n,maxn=0;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> ans;
    // for(int i=0;i<t;i++)
    // {
    //     if(t1[i]+1==t2[i])
    //     {
    //         b[i-1]++;
    //     }
    // }
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        for(int j=0;j<t;j++)
        {
            if(a[i]==t2[j])
            {
                t3[j]=false;
            }
            if(t3[j])
            {
                b[i]++;
                maxn=max(maxn,b[i]);
            }
            if(a[i]==t1[j])
            {
                t3[j]=true;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<t;j++)
        {
            if(a[i]==t1[j]&&a[i+1]==t2[j])
            {
                if(i-1>=0)
                {
                    b[i-1]++;
                    maxn=max(maxn,b[i-1]);
                }
                if(i+2<n)
                {
                    b[i+2]++;
                    maxn=max(maxn,b[i+2]);
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(b[i]==maxn)
        {
            ans.push_back(a[i]);
        }
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
    {
        if(i>0) cout<<" ";
        cout<<ans[i];
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