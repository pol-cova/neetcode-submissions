class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        map<array<int, 26>, vector<string>> f;
        for(const auto s: strs){
            array<int, 26> freq{};
            for(char ch: s){
                freq[ch - 'a']++;
            }
            f[freq].push_back(s);
        }

        for(auto [k, v]: f){
            res.push_back(v);
        }

        return res;
    }
};
