/*
 * @lc app=leetcode.cn id=3289 lang=cpp
 *
 * [3289] 数字小镇中的捣蛋鬼
 */

// @lc code=start
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> a;
        unordered_map<int,int> b;
        for(int x:nums)
        {
            b[x]++;
            if(b[x]==2)
            {
                a.push_back(x);
            }
        }
        return a;

    }
};
// @lc code=end

