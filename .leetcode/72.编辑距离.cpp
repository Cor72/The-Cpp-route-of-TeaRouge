/*
 * @lc app=leetcode.cn id=72 lang=cpp
 *
 * [72] 编辑距离
 */

// @lc code=start
class Solution {
public:
    int minDistance(string word1, string word2) {
        int m=word1.size(), n=word2.size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        auto dfs=[&](this auto&&dfs,int i, int j)->int{ 
            if(i<0){
                return j+1;
            }
            if(j<0){
                return i+1;
            }
            int&res=dp[i][j];
            if(res!=-1){
                return res;
            }
            if(word1[i]==word2[j]){
                return dfs(i-1,j-1);
            }
            return res=min(dfs(i-1,j),min(dfs(i,j-1),dfs(i-1,j-1)))+1;
        };
        return dfs(m-1,n-1);
    }
};
// @lc code=end

