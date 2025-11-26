// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem1005.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=1005 lang=cpp
 *
 * [1005] K 次取反后最大化的数组和
 */

// @lc code=start
class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int count=0;
        int i = 0;
        if(k>nums.size())
        {
        for (int i=0; i < nums.size(); i++)
        {
            nums[i]=-nums[i];
        }
        k-=nums.size();
        }
        for (; i < k; i++)
        {
            if(nums[i]>=0)
            break;
            nums[i]=-nums[i];
            count++;
        }
        if(k-count>0)
        {
            int m=k-count;
            m%=2;
            sort(nums.begin(),nums.end());
            if(m)
            {
                nums[0]=-nums[0];
            }
            
        }
        int sum=0;
        for(int c:nums)
        {
            sum += c;
        }
        return sum;
    }
};
// @lc code=end

