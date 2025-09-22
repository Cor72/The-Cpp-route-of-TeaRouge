/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i=digits.size()-1;i>=0;i--)
        {
            if(digits[i]!=9){
            digits[i]++;
            return digits;
            }
            else
            {
                digits[i]=0;
            }
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};
// @lc code=end

