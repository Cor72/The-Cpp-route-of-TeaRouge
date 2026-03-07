/*
 * @lc app=leetcode.cn id=3679 lang=cpp
 *
 * [3679] 使库存平衡的最少丢弃次数
 */

// @lc code=start
class Solution {
public:
    int minArrivalsToDiscard(vector<int>& arrivals, int w, int m) {
        long long ans = 0;
        unordered_map<int, int> mp;
        for(int i = 0; i < arrivals.size(); i++)
        {
            mp[arrivals[i]]++;
            if(mp[arrivals[i]]>m)
            {
                mp[arrivals[i]]--;
                arrivals[i] = 0;
                ans++;
            }
            if(i-w+1<0)
            continue;
            mp[arrivals[i-w+1]]--;
        }
        return ans;
    }
};
// @lc code=end

