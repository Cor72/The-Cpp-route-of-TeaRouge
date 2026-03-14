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