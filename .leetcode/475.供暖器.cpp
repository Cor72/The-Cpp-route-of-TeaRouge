/*
 * @lc app=leetcode.cn id=475 lang=cpp
 *
 * [475] 供暖器
 */

// @lc code=start
class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        int cnt = 0;
        int ans = 0;
        int j=0;
        for(int r = 0; r < houses.size(); r++)
        {
            int l=0;
            if(r==heaters[j])
            {
                j++;
                l=r;
            }
            ans=max(ans,(r-l)/2);
        }
        return ans;

    }
};
// @lc code=end

