/*
 * @lc app=leetcode.cn id=2090 lang=cpp
 *
 * [2090] 半径为 k 的子数组平均值
 */

// @lc code=start
class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> ans(n, -1);
        if(n<=2*k) return ans;
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            if(i<k*2)
            continue;
            ans[i-k]=sum/(2*k+1);
            sum-=nums[i-k*2];
        }
        return ans;
    }
};
// @lc code=end

