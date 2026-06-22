class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pr;
        int n=nums.size();
        int l = 1;
        for(int i=0; i<n; i++){
            pr.push_back(l);
            l = l * nums[i];
        }
        int r = 1;
        for(int i=n - 1; i>=0; i--){
            pr[i] = pr[i] * r;
            r = r * nums[i];
        }

        return pr;
    }
};
