#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include<queue>
#include<vector>
#include<map>
using namespace std;
using ll=long long;
using pii=pair<int,int>;
const int N=4e5+1;

void solve()
{

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int arr[201];
    int a=0;
    string s;
    cin>>s;
    for(int i=0;i<100;i++)
    {
        int t=s[i]-'0';
        if(a==0)
        {
        if(t==0)
        a=3;
        else if(t==1)
        a=0;
        else if(t==2)
        a=1;
        else if(t==3)
        a=2;
        else if(t==4)
        a=1;
        else
        a=3;
        }
        else if(a==1)
        {
        if(t==0)
        a=2;
        else if(t==1)
        a=3;
        else if(t==2)
        a=0;
        else if(t==3)
        a=1;
        else if(t==4)
        a=2;
        else
        a=0;}
        else if(a==2)
        {
        if(t==0)
        a=1;
        else if(t==1)
        a=2;
        else if(t==2)
        a=3;
        else if(t==3)
        a=0;
        else if(t==4)
        a=3;
        else
        a=1;
        }
        else
        {
        if(t==0)
        a=0;
        else if(t==1)
        a=1;
        else if(t==2)
        a=2;
        else if(t==3)
        a=3;
        else if(t==4)
        a=0;
        else
        a=2;
        }
        arr[i]=a;

    }
    for(int i=0;i<100;i++)
    cout<<arr[i];
    return 0;
}
