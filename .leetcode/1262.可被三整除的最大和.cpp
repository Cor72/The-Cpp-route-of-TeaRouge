/*
 * @lc app=leetcode.cn id=1262 lang=cpp
 *
 * [1262] 可被三整除的最大和
 */

// @lc code=start
class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        int sum;
        for (int c:nums)
        {
            sum+=c;
        }
        if(sum%3==0)
        return sum;
        vector<int> a1;
        vector<int> a2;
        vector<int> a3;
        for (int c:nums)
        {
            if(c%3==1)
            a1.push_back(c);
            if(c%3==2)
            a2.push_back(c);
        }
        sort(a1.begin(),a1.end());
        sort(a2.begin(),a2.end());
        if(sum%3==2)
        swap(a1,a2);
        int ans = a1.size() ? sum - a1[0] : 0;
        if (a2.size() > 1)
            ans = max(ans, sum - a2[0] - a2[1]);
        return ans;
        
    }
};
// @lc code=end

