#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include<queue>
#include<vector>
using namespace std;
using ll=long long;
using pii=pair<int,int>;
const int N=4e5+1;
//10, 5, 10, 5, 2, 5, 10, 5, 10, 1 
void solve()
{
    int n;
    cin>>n;
    int m=n%10;
    if(m==1||m==3||m==7||m==9)
    cout<<10;
    else if(m==2||m==4||m==6||m==8)
    cout<<5;
    else if(m==5)
    cout<<2;
    else if(m==0)
    cout<<1;


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
