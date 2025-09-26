#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;

int mex(vector<int> a)
{
 sort(a.begin(),a.end());
 a.erase(unique(a.begin(),a.end()),a.end());
 for(int i=0;i<a.size();i++)
 {
    if(a[i]!=i)
    {
    return i;
    }    

 }   
 return a.size();
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<bool> have(k, false);
        int kCnt = 0;
        for (int x : a) {
            if (x < k) have[x] = true;
            if (x == k) ++kCnt;
        }

        int mustAdd = 0;
        for (int i = 0; i < k; ++i)
        if (!have[i]) ++mustAdd;

        if(kCnt>=mustAdd){
            cout<<kCnt<<'\n';
        }
        else
        cout << mustAdd<< '\n';

    }
    return 0;
}