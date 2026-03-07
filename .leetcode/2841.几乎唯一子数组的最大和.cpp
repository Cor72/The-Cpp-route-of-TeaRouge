/*
 * @lc app=leetcode.cn id=2841 lang=cpp
 *
 * [2841] 几乎唯一子数组的最大和
 */

// @lc code=start
class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k) {
        long long ans = 0;
        long long sum = 0;
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
            sum+=nums[i];
            if(i+1<k)
            continue;
            if(mp.size()>=m)
            {
                ans = max(ans, sum);
            }
            if(i+1>=k)
            {
                mp[nums[i-k+1]]--;
                if(mp[nums[i-k+1]]==0)
                mp.erase(nums[i-k+1]);
                sum-=nums[i-k+1];
            }

        }
        return ans;
    }
};
// @lc code=end

