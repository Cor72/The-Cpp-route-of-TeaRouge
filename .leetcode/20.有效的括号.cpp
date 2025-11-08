/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char& c:s)
        {
            if(c=='('||c=='['||c=='{')
            st.push(c);
            else
            {
                if(st.empty()){return false;}
                if(st.top()=='{'&&c=='}')
                st.pop();
                else if(st.top()=='['&&c==']')
                st.pop();
                else if(st.top()=='('&&c==')')
                st.pop();
                else
                return false;
            }
        }
        if(st.empty())
        return true;
        else
        return false;
    }
};
// @lc code=end

