/*
 * @lc app=leetcode.cn id=2379 lang=cpp
 *
 * [2379] 得到 K 个黑块的最少涂色次数
 */

// @lc code=start
class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int count = 0;
        for(int i = 0; i<k; i++)
        {
            if(blocks[i] == 'W')
            {
                count++;
            }
        }
        int ans = count;
        for(int i = k; i<blocks.size(); i++)
        {
            if(blocks[i] == 'W')
            {
                count++;
            }
            if(blocks[i-k] == 'W')
            {
                count--;
            }
            ans = min(ans,count);
        }
        return ans;
    }
};
// @lc code=end

