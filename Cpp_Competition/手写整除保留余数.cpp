#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int x;cin>>x;
    ll sum =1;
    string s;
    for(ll rem=1;;rem=((rem*10)+1))
    {
    	int digit=rem/x;
    	s.push_back(digit+'0');
    	rem %= x;
    	if(rem==0)
    	{
    		break;
    	}
    	sum++;
    }
    
    s.erase(0,s.find_first_not_of('0'));
   cout<<s<<" "<<sum;
    return 0;
}