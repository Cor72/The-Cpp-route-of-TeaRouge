// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem209.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=209 lang=cpp
 *
 * [209] 长度最小的子数组
 */

// @lc code=start
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int result =INT32_MAX;
        int length =0;
        int sum =0;
        int i=0;
        for(int j=0;j<nums.size();j++)
        {
            sum +=nums[j];

            while(sum>=target)
            {
                length =(j-i+1);
                result =min(result,length);
                sum-=nums[i];
                i++;
            }
        }
        return result==INT32_MAX?0:result;
    }
};
// @lc code=end

