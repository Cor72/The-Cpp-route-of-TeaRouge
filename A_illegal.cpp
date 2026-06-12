#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
vector<string>st;

void solve() {
    int w,l;cin>>w>>l;
    string s;cin>>s;

    while(w--){
        string t;cin>>t;
        st.push_back(t);
    }
    vector<int>dp(l+2);
    dp[l]=0;
    for(int i=l-1;i>=0;i--)
    {
        dp[i]=dp[i+1]+1;
        int Min=1e9;
        for(string&u:st)
        {
            if(u[0]!=s[i])continue;
            int pos=0,p=-1;
            for(int j=i;j<l;j++)
            {
                if(s[j]==u[pos])pos++;
                if(pos==u.size())
                {
                    p=j+1;
                    break;
                }
            }
            if(p!=-1)Min=min(Min,dp[p]+p-i-(int)u.size());
        }
        dp[i]=min(dp[i],Min);
    }
    cout << dp[0];
}
int main() {
    int t=1;
    //cin>>t;
    while(t--)solve();
}