/*
 * @lc app=leetcode.cn id=1047 lang=cpp
 *
 * [1047] 删除字符串中的所有相邻重复项
 */

// @lc code=start
class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(char& c:s)
        {
            if(st.empty())
            st.push(c);
            else
            {
                if(c==st.top())
                st.pop();
                else
                st.push(c);
            }
        }
        string ans = "";
        while(!st.empty())
        {
            ans +=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
// @lc code=end

