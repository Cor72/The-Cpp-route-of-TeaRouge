// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem15.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        for(int i=0;i<=nums.size()-1;i++)
        {
            if(nums[i]>0)
            {
                return result;
            }

            if(i>0&&nums[i]==nums[i-1])
            {
                continue;
            }
            int l=i+1;int r=nums.size()-1;
            while(l<=r)
            {
                if(nums[i]+nums[r]+nums[l]==0)
                {
                    result.push_back({nums[i],nums[r],nums[l]});
                    while(r>l&&nums[r]==nums[r-1])
                    {
                        r--;
                    }
                    while(r>l&&nums[l]==nums[l-1])
                    {
                        l++;
                    }                
                }
                else if(nums[i]+nums[r]+nums[l]>0)
                {
                    r--;
                }
                else
                l++;
            }
        }
        return result;
    }
    };
// @lc code=end

