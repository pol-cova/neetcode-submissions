class Solution {
public:
    bool isPalindrome(string s) {
        clean(s);
        int n=s.size();
        int l=0, r=n-1;
        while (l < r){
            if(s[l] != s[r]) return false; 
            l++; 
            r--;
        }
        return true;
    }

    void clean(std::string& s) {
    size_t writeIdx = 0;
    for (size_t readIdx = 0; readIdx < s.length(); ++readIdx) {
        unsigned char c = s[readIdx];
        if (std::isalnum(c)) {
            s[writeIdx++] = std::tolower(c);
        }
    }
    s.resize(writeIdx);
    }
};
