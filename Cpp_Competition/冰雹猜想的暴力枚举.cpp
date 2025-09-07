#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;

int apple(int t)
{
	if(t%2==0)
	{
		return t/2;
	}
	else
	{
		return 3*t+1;
	}
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
    	int k,x;
    	cin>>k>>x;
    	for(int i=1;;i++)
    	{
    		int tmp = i;
    		for(int j=0;j<k;j++)
    		{
    			tmp = apple(tmp);
    		}
    		if(tmp==x){
    		cout<<i<<"\n";
    		break;
    		}
    	}
    }
    return 0;
}



//然而大智若愚。。。

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin>>n;
    while(n--){
        int k;
        cin>>k;
        long long x;
        cin>>x;
        while(k--){
            if(x%2==0){
                x=x*2;
            }
            else {
                x=x*2;
            }
        }
        cout<<x<<"\n";
    }
    return 0;
}