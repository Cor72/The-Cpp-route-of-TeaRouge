#include<iostream>
#include<string>
#include<vector>
using namespace std;
using ll=long long;
using pii=pair<int,int>;

void solve()
{
    int count;
    cin>>count;
    vector<int> a(count);
    for(int i=0;i<count;i++)
    {
        cin>>a[i];
    }
    int ans=0;int sum=abs(a[0]-a[1]);
    for (int i = 1; i < count-1; i++)
    {
        int c=(abs(a[i]-a[i+1])+abs(a[i]-a[i-1])-abs(a[i-1]-a[i+1]));
        if(c>sum)
        {
            ans=i;
            sum=c;
        }
    }
    int v=abs(a[count-1]-a[count-2]);
    if(v>sum)
    {
        ans=count-1;
        sum=v;
    }
    int kp=0;
    for (int i = 1; i < count; i++)
    {
        kp+=(abs(a[i]-a[i-1]));
    }
    cout<<kp-sum<<"\n";



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
