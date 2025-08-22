#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;
//普通解法1
//使用递归计算斐波那契数列，时间复杂度O(2^n)，效率较低 
// 例如Fib(60)需要计算2^60次，效率极低


ll Fib(ll n)
{
	if(n == 0)
	return 0;
	if(n==1||n==2)
	return 1;
	else
	return Fib(n-1)+Fib(n-2);
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    ll T;
    cin>>T;
    while(T--)
    {
    	ll N=0;
    	cin>>N;
    	ll F=Fib(N);
        cout << "Fib(" << N << ") = " << Fib(N) << '\n';
    }
    

    return 0;
}




//优化解法2
//使用数组存储斐波那契数列，避免重复计算

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    ll Fib[61];     // 声明一个超长数组
    Fib[0]=0;
    Fib[1]=1;
    Fib[2]=1;
    for (int i = 3; i <= 60; ++i)
    Fib[i] = Fib[i-1] + Fib[i-2];   
    // 递推出60项

    
    ll T;
    cin>>T;
    while(T--)
    {
    	ll N=0;
    	cin>>N;
    	ll F=Fib[N];
        cout << "Fib(" << N << ") = " << Fib[N] << '\n';
    }
    

    return 0;
}


