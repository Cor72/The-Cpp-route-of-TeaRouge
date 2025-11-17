/*
 * @lc app=leetcode.cn id=455 lang=cpp
 *
 * [455] 分发饼干
 */

// @lc code=start
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int sum=0;
        for(int i=0;i<s.size();i++)
        {
            if(sum<g.size()&&g[sum]<=s[i])
            {
                sum++;
            }
        }
        return sum;
    }
};
// @lc code=end

