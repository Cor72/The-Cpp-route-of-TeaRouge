#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;

void solve()
{
    
    
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    ll n;
    cin>>n;
    
    ll nums[n];     // 声明一个超长数组
    for(int i=0;i<n;i++){
    	cin>>nums[i];
    	if(nums[i]<0||nums[i]>=n)
    	return -1;   	
    }
    for(int j=0;j<n;j++){
    	for(int k=j+1;k<n;k++){
    		if(nums[j]==nums[k])
    		return nums[j];
    	}
}
    return -1;
    return 0;
}


//如果给的是nums数组
class Solution {
public:
    int duplicateInArray(vector<int>& nums) {
    int n = nums.size();
    // 检查范围
    for (int i=0;i<n;i++){
    if (nums[i] < 0 || nums[i] >= n)
    return -1;
    }
    	
    for(int j=0;j<n;j++){
    	for(int k=j+1;k<n;k++){
    		if(nums[j]==nums[k])
    		return nums[j];
    	}
}
    return -1;
    }
};