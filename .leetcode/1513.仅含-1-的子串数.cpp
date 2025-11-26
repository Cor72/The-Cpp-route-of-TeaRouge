/*
 * @lc app=leetcode.cn id=1513 lang=cpp
 *
 * [1513] 仅含 1 的子串数
 */

// @lc code=start
class Solution {
public:
    int numSub(string s) {
        long long M=1000000007;
        long long ans=0;
        int last0=-1;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]==0)
            {
                last0=i;
            }
            else
            {
                ans+=i-last0;
            }
        }
        return ans;
    }
};
// @lc code=end

