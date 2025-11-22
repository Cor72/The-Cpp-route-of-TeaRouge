/*
 * @lc app=leetcode.cn id=55 lang=cpp
 *
 * [55] 跳跃游戏
 */

// @lc code=start
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int cover;
        for (int i = 0; i < nums.size(); i++)
        {
            if(cover>=i){
            cover=max(cover,nums[i]+i);
            }
            else
            return false;
        }
        return true;
        
        
    }
};
// @lc code=end

