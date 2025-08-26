#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    char ch;
    cin>>ch;
    
    double M [12][12];
    for(int i=0;i<12;i++){
    	for(int j=0;j<12;j++)
    	{
    		cin>>M[i][j];
    	}
    } 
    double sum =0.0;
    for(int m=7;m<12;m++){
    	for(int n=0;n<12;n++)
    	{
    		if(m>n&&m+n>11){
    			sum += M[m][n];
    		}
    	}
    } 
    if(ch =='S'){
    printf("%.1f",sum);
    }
    else
    printf("%.1f",sum/30);
    return 0;
}