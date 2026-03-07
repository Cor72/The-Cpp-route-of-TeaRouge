/*
 * @lc app=leetcode.cn id=1888 lang=cpp
 *
 * [1888] 使二进制字符串字符交替的最少反转次数
 */

// @lc code=start
class Solution {
public:
    int minFlips(string s) {
        int n = s.size();
        s += s; // 倍长

        string target0 = "01"; // 010101...
        string target1 = "10"; // 101010...

        int cnt0 = 0, cnt1 = 0;
        // 初始化第一个窗口 [0, n-1]
        for (int i = 0; i < n; i++) {
            if (s[i] != target0[i % 2]) cnt0++;
            if (s[i] != target1[i % 2]) cnt1++;
        }

        int ans = min(cnt0, cnt1);

        // 滑动窗口：窗口为 [i - n + 1, i]
        for (int i = n; i < 2 * n; i++) {
            // 移除左边 s[i - n]
            if (s[i - n] != target0[(i - n) % 2]) cnt0--;
            if (s[i - n] != target1[(i - n) % 2]) cnt1--;

            // 加入右边 s[i]
            if (s[i] != target0[i % 2]) cnt0++;
            if (s[i] != target1[i % 2]) cnt1++;

            ans = min({ans, cnt0, cnt1});
        }
        return ans;
    }
};
// @lc code=end

