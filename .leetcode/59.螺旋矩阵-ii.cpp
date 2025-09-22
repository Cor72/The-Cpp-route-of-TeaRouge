/*
 * @lc app=leetcode.cn id=59 lang=cpp
 *
 * [59] 螺旋矩阵 II
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n,vector<int>(n));
        int qr=n/2;
        int offset =1;
        int count=1;
        int start=0;
        int mid=n/2;//注意是从零开始
        while(qr--)
        {
        int i=start;
        int j=start;
        for(;j<n-offset;j++){
            res[i][j]=count++;
        }
        for(;i<n-offset;i++){
            res[i][j]=count++;
        }
        for(;j>start;j--){
            res[i][j]=count++;
        }
        for(;i>start;i--){
            res[i][j]=count++;
        }
        start++;
        offset++;
        }
        if(n&1){
            res[mid][mid]=count++;
        }
        return res;\
    }
};
// @lc code=end

