/*
 * @lc app=leetcode.cn id=1423 lang=cpp
 *
 * [1423] 可获得的最大点数
 */

// @lc code=start
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        long long sum = accumulate(cardPoints.end()-k, cardPoints.end(), 0LL);
        long long ans = sum;
        for(int i = cardPoints.size();i<cardPoints.size()+k; i++)
        {
            sum += cardPoints[i%cardPoints.size()] - cardPoints[i-k];
            ans = max(ans, sum);
        }
        return ans;
    }
};
// @lc code=end

