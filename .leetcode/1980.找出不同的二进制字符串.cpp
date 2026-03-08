/*
 * @lc app=leetcode.cn id=1980 lang=cpp
 *
 * [1980] 找出不同的二进制字符串
 */

// @lc code=start
class Solution {
    int binToDec(string s) {
    int res = 0;
    for (int i = 0; i < s.size(); i++) {
        res = res * 2 + (s[i] - '0');
    }
    return res;
    }
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;


        for(auto& s: nums)
        {
            int dec = binToDec(s);
            mp[dec]++;
        }
        for(int i = 0; i <= n; i++)
        {
            if(mp[i] == 0)
            {
                string s=bitset<32>(i).to_string().substr(32 - n);
                return s;
                break;
            }
        }
        return "";
    }
};
// @lc code=end

