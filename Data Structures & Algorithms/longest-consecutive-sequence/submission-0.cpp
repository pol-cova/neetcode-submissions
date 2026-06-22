class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> st(nums.begin(), nums.end()); // set
        int res=0;
        for(int n: nums){
            if(!st.contains(n-1)){
                int ll=0;
                while(st.contains(n+ll)){
                    ll++;
                }
                res = max(ll, res);
            }
        }
        return res;
    }
};
