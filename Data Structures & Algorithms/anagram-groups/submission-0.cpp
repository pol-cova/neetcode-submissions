class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(auto s: strs){
            mp[px(s)].push_back(s);
        }

        vector<vector<string>> sol;
        sol.reserve(mp.size());
        for(auto& [k, v]: mp){
            sol.push_back(move(v));
        }
        return sol;
    }
    string px(string s){
        string sol(26, 0);
        for(int i=0; i<s.size(); i++){
            sol[s[i] - 'a']++;
        }
        return sol;
    }
};
