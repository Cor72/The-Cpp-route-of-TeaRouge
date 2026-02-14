#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include<queue>
#include<vector>
#include<map>
#include<iomanip>

using namespace std;
using ll=long long;
using ld=long double;
using pii=pair<int,int>;
const int N=4e5+1;

void solve()
{
    int n,w;
    cin>>n>>w;
    vector<ll> a(n);
    vector<ll> b(n);
	priority_queue<pair<ld,ll>> pq;
    ld sum=0;
	for(ll i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
		sum+=sqrt(a[i]*a[i]+b[i]*b[i]);
		if(b[i]>0)
		pq.push({sqrt(a[i]*a[i]+b[i]*b[i])-sqrt(a[i]*a[i]+(b[i]-1)*(b[i]-1)),i});
	}
    while(!pq.empty()&&w>0)
    {
        pair<ld,ll> let=pq.top();
        sum-=let.first;
        pq.pop();
        b[let.second]--;
        w--;
        if(b[let.second]>0)
        pq.push({sqrt(a[let.second]*a[let.second]+b[let.second]*b[let.second])-sqrt(a[let.second]*a[let.second]+(b[let.second]-1)*(b[let.second]-1)),let.second});
    }
    cout << fixed << setprecision(9) << sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
