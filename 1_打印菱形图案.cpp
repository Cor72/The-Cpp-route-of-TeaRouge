#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;

void solve()
{
    int count;
    cin>>count;
    int mid=count/2;
    for (int i = 0; i < count; i++)
    {
        int space =abs(i-mid);
        int stars=count-2*space;
        cout<<string(space*2,' ');
        for (int i = 0; i < stars; i++)
        {
            cout<<'*'<<" ";
            /* code */
        }
        cout<<"\n";
        
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
