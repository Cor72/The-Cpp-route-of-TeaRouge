#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t=0;
    cin >>t;
    while(t--){
    	int m,n;
    	string a,b,c;
    	cin>>m>>a>>n>>b>>c;

    //a不动，b嵌套进a前后，循环n次
    for(int i=0;i<n;++i){
    	if(c[i]=='V')
    	a.insert(0,1,b[i]);
    	else
    	a+=b[i];
        }
        cout<<a<<"\n";
}
    return 0;
}