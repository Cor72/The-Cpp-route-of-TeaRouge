/*
 * @lc app=leetcode.cn id=4 lang=cpp
 *
 * [4] 寻找两个正序数组的中位数
 */

// @lc code=start
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double> num;
        num.insert(num.end(),nums1.begin(),nums1.end());
        num.insert(num.end(),nums2.begin(),nums2.end());
        sort(num.begin(),num.end());
        if(num.size() &1)
        {
            return num[num.size()/2];
        }
        else
        return (num[num.size()/2]+num[num.size()/2-1])/2;
    }
};
// @lc code=end

