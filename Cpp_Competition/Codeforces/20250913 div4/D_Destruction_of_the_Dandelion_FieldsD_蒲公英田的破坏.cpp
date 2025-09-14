#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;

void solve()
{
    
    
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        vector<ll> b(n);
        ll sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if(a[i] &1)
            {
                

            }
            sum += a[i];
            
        }
        cout << (has_odd ? sum : 0) << '\n';
    }
    return 0;
}