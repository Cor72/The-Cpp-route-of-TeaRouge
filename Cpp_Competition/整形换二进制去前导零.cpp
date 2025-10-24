#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;

bool solve(const string &s)
{
    int p=0;int q=s.size()-1;
    while(p<q)
    {
    	if(s[p]!=s[q])
    	return false;
    	p++;q--;
    } 
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;cin>>T;
    while(T--)
    {
    	int n;cin>>n;
    	string s=to_string(n);
    	if(solve(s))
    	{
    		cout<<"NO\n";
    		continue;
    	}
    	string u=bitset<32>(n).to_string();
    	u.erase(0,u.find_first_not_of('0'));
    	if(solve(u))
    	{
    		cout<<"YES\n";
    	}
    	else
    	{
    		cout<<"NO\n";
    	}
    	
    	
    }
    
    return 0;
}