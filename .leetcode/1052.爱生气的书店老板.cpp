/*
 * @lc app=leetcode.cn id=1052 lang=cpp
 *
 * [1052] 爱生气的书店老板
 */

// @lc code=start
class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        long long ans = 0;
        long long sum = 0;
        long long maxSum = 0;
        for(int i = 0; i < customers.size(); i++)
        {
            if(grumpy[i] == 0)
            ans += customers[i];
            else
            grumpy[i]=customers[i];
        }
        for(int i=0;i<grumpy.size();i++)
        {
            sum += grumpy[i];
            if(i-minutes+1<0)
            continue;
            maxSum = max(maxSum,sum);
            sum-=grumpy[i-minutes+1];
        }
        return ans+maxSum;
    }
};
// @lc code=end

