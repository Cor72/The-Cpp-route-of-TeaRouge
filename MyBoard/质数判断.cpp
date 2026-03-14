#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;

bool isprime(ll n)
{
    if(n<=1)
    return false;
    else if(n==2||n==3)
    	return true;
    for(ll i=2;i*i<=n;++i){
    	if (n%i==0)
    	return false;
    }
    return true;
    
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int N=0;
    cin >>N;
    
    
    for(int j=0;j<N;++j){
    	ll X=0;
    	cin >> X;
    	if(isprime(X)==1)
    	cout<<X<<" is prime\n";
    	else
    	cout<<X<<" is not prime\n";
    }

    return 0;
}