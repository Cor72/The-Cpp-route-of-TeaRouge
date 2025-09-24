/*
 * @lc app=leetcode.cn id=202 lang=cpp
 *
 * [202] 快乐数
 */

// @lc code=start
class Solution {
public:
    long long lzig(int n){
        long long sum=0;
        while(n){
            sum+=((n%10)*(n%10));
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int> set;
        while(1){
            long long N=lzig(n);
            if(N==1){
                return true;
            }
            else if(set.find(N)!=set.end()){
                return false;
            }
            else{
                set.insert(N);
                n=N;
            }

        }
    }
};
// @lc code=end

