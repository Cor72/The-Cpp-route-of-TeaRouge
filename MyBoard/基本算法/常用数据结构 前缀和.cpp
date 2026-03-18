#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vll=vector<vector<ll>>;
const int N=4e5+1;const int MOD=998244353;


/*§0.1 枚举右，维护左
对于 双变量问题，例如两数之和ai+aj=t，可以枚举右边的aj,转换成 单变量问题，也就是在aj左边查找是否有ai=t−aj,这可以用哈希表维护。
我把这个技巧叫做 枚举右，维护左。*/
//如果一组数字 (i,j) 满足 nums[i] == nums[j] 且 i < j ，就可以认为这是一组 好数对 。
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans=0;
        unordered_map<int,int> cnt;
        for(int x:nums)
        {
            ans+=cnt[x];
            cnt[x]++;
        }
        return ans;
    }
};
/*§0.2 枚举中间
对于有三个或者四个变量的问题，枚举中间的变量往往更好算。

为什么？比如问题有三个下标，需要满足 0≤i<j<k<n，对比一下：

枚举 i，后续计算中还需保证 j<k。
枚举 j，那么 i 和 k 自动被 j 隔开，互相独立，后续计算中无需关心 i 和 k 的位置关系。*/

class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> suf(n);
        suf[n-1]=nums[n-1];
        for(int i=n-2;i>1;i--)
        {
            suf[i]=min(suf[i+1],nums[i]);
        }
        int ans=INT_MAX;
        int pre=nums[0];
        for(int j=1;j<n-1;j++)
        {
            if(pre<nums[j]&&nums[j]>suf[j+1])
            {
                ans=min(ans,pre+nums[j]+suf[j+1]);
            }
            pre=min(pre,nums[j]);
        }
        return ans==INT_MAX?-1:ans;
    }
};

/*§0.3 遍历对角线*/
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=mat[i][i]+mat[i][n-i-1];
        }
        if(n&1)
        {
            ans-=mat[n/2][n/2];
        }
    }
}
class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int m=grid.size();int n=grid[0].size();
        for(int k=1;k<m+n;k++)
        {
            int minj=max(n-k,0);
            int maxj=min(m+n-1-k,n-1);
            vector<int> a;
            for(int j=minj;j<=maxj;j++)
            {
                a.push_back(grid[k+j-n][j]);
            }
            if(minj>0)
            {
                sort(a.begin(),a.end());
            }
            else
            {
                sort(a.begin(),a.end(),greater<>());
            }
            for(int j=minj;j<=maxj;j++)
            {
                grid[k+j-n][j]=a[j-minj];
            }
        }
        return grid;
    }
};

/*一、前缀和
§1.1 基础
左闭右开公式：子数组 [left,right) 的元素和为 sum[right]−sum[left]。把下标区间定义成左闭右开，就不需要加一减一了。*/

class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        vector<int> s(n+1);
        for(int i=0;i<n;i++)
        {
            s[i+1]=s[i]+nums[i];
            int start=max(0,i-nums[i]);
            ans+=s[i+1]-s[start];
        }
        return ans;
    }
};





void solve()
{
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}