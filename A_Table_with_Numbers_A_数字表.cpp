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

void solve()
{
	int T,n,h,l,i,a,c1,c2;
	for(cin>>T;T>0;T--)
	{
		cin>>n>>h>>l;
		c1=0;
		c2=0;
		for(i=0;i<n;i++)
		{
			cin>>a;
			if(a<=h)c1++;
			if(a<=l)c2++;
		}
		cout<<min(min(c1,c2),max(c1,c2)/2)<<'\n';
	}
	return;
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}
