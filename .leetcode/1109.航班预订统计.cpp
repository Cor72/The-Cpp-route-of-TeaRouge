/*
 * @lc app=leetcode.cn id=1109 lang=cpp
 *
 * [1109] 航班预订统计
 */

// @lc code=start
class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> a(n);
        for(auto& booking : bookings)
        {
            a[booking[0]-1]+=booking[2];
            if(booking[1]<n)
            a[booking[1]]-=booking[2];
        }
        for(int i=0;i<n-1;i++)
        {
            a[i+1]+=a[i];
        }
        return a;
    }
};
// @lc code=end

