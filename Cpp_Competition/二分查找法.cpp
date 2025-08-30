#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;



//找到某一个与key相同的值的位置

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n,m;
    cin>>n>>m;
    int N[n];
    for(ll i=0;i<n;i++)
    {
    	cin>>N[i];
    }
    while(m--){
    ll key;
    cin>>key;
    ll left=0,right=n-1;
    while(left<=right)
    {
    	ll mid=left+(right-left)/2;
    	if(N[mid]==key)
    	{
    	cout<<mid+1<<" ";
    	return 0;
    	}
    	else if(key<N[mid])
    	right=mid-1;
    	else left=mid+1;
    }
    cout<<-1<<" ";
    }
}


//如果要求key在数列中最早出现的位置
//那么需要对二分法做一点小小的修正


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n,m;
    cin>>n>>m;
    int N[n];
    for(ll i=0;i<n;i++)
    {
    	cin>>N[i];
    }
    while(m--){
    ll key;
    cin>>key;
    ll left=0,right=n-1;
    while(left<=right)
    {
    	ll mid=left+(right-left)/2;
    	if(N[mid]>=key)
    	right=mid-1;
    	else left=mid+1;
    }
    if(left<n&&N[left]==key)
    cout<<left+1<<" ";
    else
    cout<<-1<<" ";
    }
}