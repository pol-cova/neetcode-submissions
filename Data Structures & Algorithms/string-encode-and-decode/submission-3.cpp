class Solution {
public:
    string encode(vector<string>& strs) {
        string res; 
        for (const auto& s : strs) {
            res += to_string(s.size());
            res += "#";
            res += s;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> sol;
        int i = 0;

        while (i < s.size()) {
            int num = 0;

            while (i < s.size() && isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
                i++;
            }

            i++; 

            sol.push_back(s.substr(i, num));

            i += num; 
        }

        return sol;
    }
};