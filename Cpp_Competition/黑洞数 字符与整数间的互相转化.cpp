
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
    for(int step=1;;step++){
    string s = to_string(n);
    while((s.size()<3)){
    	s='0'+s;
    }
    
    string smax=s;
    string smin=s;
    sort(smax.rbegin(),smax.rend());
    sort(smin.begin(),smin.end());
    int nmin=stoi(smin);
    int nmax=stoi(smax);
    int ans=nmax-nmin;
        cout << step << ": "
             << nmax << " - "
             << nmin
             << " = "
            << ans << '\n';
    if(ans ==495||ans ==0)
    {
    	break;
    }
    n=ans;
    }
    return 0;
}