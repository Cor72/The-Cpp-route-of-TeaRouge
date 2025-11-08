#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;

void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    int b=-1;
    int count=0;
    vector<int> d;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%3==0)
        b=max(a[i],b);
        if(a[i]%3==1)
        {
            count++;
        }
        if(a[i]%3==2)
        {
            d.push_back(a[i]);
        }
    }
    char buf[20];
    if (d.empty()) strcpy(buf, "NONE");
    else sprintf(buf, "%.1f", accumulate(d.begin(), d.end(), 0.0) / d.size());
    cout<<(b == -1 ? "NONE" : to_string(b))<<" "<<(count == 0 ? "NONE" : to_string(count))<<" "<<buf;

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}