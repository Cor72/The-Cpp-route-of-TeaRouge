/*
 * @lc app=leetcode.cn id=1343 lang=cpp
 *
 * [1343] 大小为 K 且平均值大于等于阈值的子数组数目
 */

// @lc code=start
class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int ans = 0;
        int s = 0;
        for (int i = 0; i < arr.size(); i++) {
            s += arr[i];
            if (i < k - 1) {
                continue;
            }
            ans += s >= k * threshold;
            s -= arr[i - k + 1];
        }
        return ans;
    }
};
// @lc code=end

