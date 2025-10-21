
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    getline(cin,s);
    
    for(char c:s)
    {
    	if(islower(c))
    	{
    		c=toupper(c)+1;
    		if(c>'Z')
    		c='A';
    	}
    	else if(isupper(c))
    	{
    		c=tolower(c)+1;
    		if(c>'z')
    		c='a';
    	}
    	cout<<c;
    }
    
    
    return 0;
}