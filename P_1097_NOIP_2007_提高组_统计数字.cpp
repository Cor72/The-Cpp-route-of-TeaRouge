#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;

void solve()
{
    int n;
    cin>>n;
    map<int,int> a;
    for(int i=0;i<n;i++)
    {
        int b;
        cin>>b;
        a[b]++;
    }

    for (auto &[w,c] : a)
    cout << w <<" "<< c << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
} 