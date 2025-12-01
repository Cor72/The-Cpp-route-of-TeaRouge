/*
 * @lc app=leetcode.cn id=643 lang=cpp
 *
 * [643] 子数组最大平均数 I
 */

// @lc code=start
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int maxs=INT_MIN;
        int s=0;
        for (int i = 0; i < nums.size(); i++)
        {
            s+=nums[i];
            if(i<k-1)
            continue;
            maxs=max(maxs,s);
            s-=nums[i-k+1];
        }
        return (double) maxs/k;
        
    }
};
// @lc code=end

