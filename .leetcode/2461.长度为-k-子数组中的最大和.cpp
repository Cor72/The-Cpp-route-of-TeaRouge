/*
 * @lc app=leetcode.cn id=2461 lang=cpp
 *
 * [2461] 长度为 K 子数组中的最大和
 */

// @lc code=start
class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long ans = 0;
        long long sum = 0;
        unordered_map<int, int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
            sum += nums[i];
            if(i+1<k)
            continue;
            if(i>=k-1)
            {
                if(mp.size() == k)
                    ans = max(ans, sum);
                sum -= nums[i-k+1];
                mp[nums[i-k+1]]--;
                if(mp[nums[i-k+1]] == 0)
                mp.erase(nums[i-k+1]);
            }
        }
        return ans;
    }
};
// @lc code=end

