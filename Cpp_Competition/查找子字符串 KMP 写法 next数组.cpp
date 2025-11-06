// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem459.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=459 lang=cpp
 *
 * [459] 重复的子字符串
 */

// @lc code=start
class Solution {
public:
void getnext(vector<int>& next,const string&s)
{
    next[0]=-1;
    int j=-1;
    for(int i=1;i<s.size();i++)
    {
        while(j>=0&&s[i]!=s[j+1])
        {
            j=next[j];
        }
        if(s[i]==s[j+1])
        {
            j++;
        }
        next[i]=j;
    }
}
    bool repeatedSubstringPattern(string s) {
        if(s.size()==0)
        {
            return false;
        }
        vector<int> next(s.size()+1);
        getnext(next,s);
        int len=s.size();
        if(next[len-1]!=-1 && len%(len-(next[len-1]+1))==0)
        {
            return true;
        }
        else
        return false;
    }
};
// @lc code=end

