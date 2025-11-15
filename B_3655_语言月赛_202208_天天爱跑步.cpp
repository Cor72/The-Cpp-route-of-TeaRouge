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
    int T;cin>>T;
    vector<int> a(6);
    for(int i=0;i<6;i++)
    {
        cin>>a[i];
    }
    int j=0;
    int sum=0;
    while(T--)
    {
        int b;
        cin>>b;
        if(b)
        {
            j+=1;
            if(j==2||j==1)
            {
                sum+=a[0];
            }
            else if(j>=3&&j<7)
            {
                sum+=a[1];
            }
            else if(j>=7&&j<30)
            {
                sum+=a[2];
            }
            else if(j>=30&&j<120)
            {
                sum+=a[3];
            }
            else if(j>=120&&j<365)
            {
                sum+=a[4];
            }
            else if(j>=365)
            {
                sum+=a[5];
            }

        }
        else
        {
            j=0;
        }
        
    }
    cout<<sum;
    return 0;
}