/*
 * @lc app=leetcode.cn id=1582 lang=cpp
 *
 * [1582] 二进制矩阵中的特殊位置
 */

// @lc code=start
class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int ans=0;
        for(auto& c:mat)
        {
            int sum=accumulate(c.begin(),c.end(),0);
            if(sum!=1)
            continue;
            int j=(find(c.begin(),c.end(),1)-c.begin());
            int tsum=0;
            for(auto& k:mat)
            {
                tsum+=k[j];
            }
            if(tsum==1)
            ans++;
        }
        return ans;
    }
};
// @lc code=end

