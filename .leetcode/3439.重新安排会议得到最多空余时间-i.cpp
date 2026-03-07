/*
 * @lc app=leetcode.cn id=3439 lang=cpp
 *
 * [3439] 重新安排会议得到最多空余时间 I
 */

// @lc code=start
class Solution {
public:
    int maxFreeTime(int eventTime, int k, vector<int>& startTime, vector<int>& endTime) {
        int n=startTime.size();
        vector<int> free(n + 1);
        free[0]=startTime[0]-0;
        for(int i=1;i<startTime.size();i++){
            free[i]=startTime[i]-endTime[i-1];
        }
        free[n]=eventTime-endTime[n-1];
        long long ans=0;
        long long sum=0;
        for(int i=0;i<n+1;i++)
        {
            sum+=free[i];
            if(i-k<0)
            continue;
            ans=max(ans,sum);
            sum-=free[i-k];
        }
        return ans;

    }
};
// @lc code=end

