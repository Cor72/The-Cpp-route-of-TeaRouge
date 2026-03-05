/*
 * @lc app=leetcode.cn id=1545 lang=cpp
 *
 * [1545] 找出第 N 个二进制字符串中的第 K 位
 */

// @lc code=start
class Solution {
public:
    char findKthBit(int n, int k) {
        string arr[21];
        arr[0]="0";
        for(int i=1;i<21;i++)
        {
            string x;
            for(char c:arr[i-1]) x+=(c=='0'?'1':'0');
            reverse(x.begin(),x.end());
            arr[i]=arr[i-1]+"1"+x;
        }
        return arr[n][k-1];
    }
};
// @lc code=end

