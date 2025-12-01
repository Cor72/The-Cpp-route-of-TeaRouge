/*
 * @lc app=leetcode.cn id=643 lang=cpp
 *
 * [643] 子数组最大平均数 I
 */

// @lc code=start
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int maxs=INT_MIN;
        int s=0;
        for (int i = 0; i < nums.size(); i++)
        {
            s+=nums[i];
            if(i<k-1)
            continue;
            maxs=max(maxs,s);
            s-=nums[i-k+1];
        }
        return (double) maxs/k;
        
    }
};
// @lc code=end

/*
 * @lc app=leetcode.cn id=1456 lang=cpp
 *
 * [1456] 定长子串中元音的最大数目
 */

// @lc code=start
class Solution {
public:
    int maxVowels(string s, int k) {
        int l=0;int r=k-1;
        int ans=0;
        for (int i = 0; i <= r; i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                ans++;
            }
        }
        int sum=ans;
        while(r<s.size())
        {
            if(sum==k)
            break;
            r++;
            if(s[l] == 'a' || s[l] == 'e' || s[l] == 'i' || s[l] == 'o' || s[l] == 'u')
            ans--;
            l++;
            if(s[r] == 'a' || s[r] == 'e' || s[r] == 'i' || s[r] == 'o' || s[r] == 'u')
            ans++;
            sum=max(ans,sum);
        }
        return sum;        


    }
};
// @lc code=end

