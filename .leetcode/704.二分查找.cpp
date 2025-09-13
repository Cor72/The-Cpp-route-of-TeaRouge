 /*
 * @lc app=leetcode.cn id=704 lang=cpp
 *
 * [704] 二分查找
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        while(left<=right)
        {
            int middle=left+((right-left)/2);
            if(nums[middle]>target)
            {
                right=middle-1;
            }
            else if(nums[middle]<target)
            {
                left=middle+1;
            }
            else
            {
                return middle;
            }
        }
        return -1;

    }

};
// @lc code=end

