/*
 * @lc app=leetcode.cn id=977 lang=cpp
 *
 * [977] 有序数组的平方
 */

// @lc code=start
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int k=nums.size()-1;
        vector<int> result(nums.size(),0);
        for(int i=0,j=nums.size()-1;i<=j;)
        {
            if(abs(nums[i])>=abs(nums[j]))
            {
                result[k]=nums[i]*nums[i];
                i++;
                k--;
            }
            else
            {
                result[k]=nums[j]*nums[j];
                j--;
                k--;
            }

        }
        return result;
    }
};
// @lc code=end

