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
int n,m,l,r,s,e,d;
long long a[N],b[N],c[N],maxx,yh;
void solve()
{
	scanf("%d%d",&n,&m);
	for(int i=1;i<=m;i++){
		scanf("%d%d%d%d",&l,&r,&s,&e);
		d=(e-s)/(r-l);
		c[l]=c[l]+s;
		c[l+1]=c[l+1]+d-s;
		c[r+1]=c[r+1]-d-e;
		c[r+2]=c[r+2]+e;
	}
	for(int i=1;i<=n;i++){
		b[i]=b[i-1]+c[i];//c[i]=b[i]-b[i-1]
		a[i]=a[i-1]+b[i];//b[i]=a[i]-a[i-1]
		if(a[i]>maxx)maxx=a[i];
		yh^=a[i];//异或
	}
	printf("%lld %lld",yh,maxx);
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
