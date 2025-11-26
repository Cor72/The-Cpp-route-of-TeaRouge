/*
 * @lc app=leetcode.cn id=2980 lang=cpp
 *
 * [2980] 检查按位或是否存在尾随零
 */

// @lc code=start
class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int cnt=0;
        for(int c:nums)
        {
            if(c&1)
            ;
            else
            {
                cnt++;
            }
        }
        if(cnt>=2)
        return true;
        else
        return false;
    }
};
// @lc code=end

