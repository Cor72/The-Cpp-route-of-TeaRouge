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
    vector<int> a(count) ;
    for(int i=0;i<count;i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < count/2; i++)
    {
        swap(a[i],a[count-i]);
    }
    for (int i = 0; i < count; i++)
    {
        cout<<a[i]<<" ";
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
