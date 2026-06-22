class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> dp(26, 0);
        for(char c: s){
            dp[c - 'a']++;
        }
        for(char c: t){
            dp[c - 'a']--;
        }
        for(int d: dp){
            if(d !=0) return false;
        }
        return true;
    }
};
