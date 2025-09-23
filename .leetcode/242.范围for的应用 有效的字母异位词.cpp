/*
 * @lc app=leetcode.cn id=242 lang=cpp
 *
 * [242] 有效的字母异位词
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        int cnt[26]={0};
        for(char c:s){
            cnt[c-'a']++;
        }
        for(char c:t){
            cnt[c-'a']--;
        }
        for(int i=0;i<26;i++){
            if(cnt[i])
            return false;
        }
        return true;
    }
};
// @lc code=end

