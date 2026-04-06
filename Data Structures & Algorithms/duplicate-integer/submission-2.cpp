class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        //return (unordered_set(nums.begin(), nums.end()).size() != nums.size())? true : false;
        unordered_map<int, int> fq;
        for(auto n: nums){
            if(fq.contains(n)){
                return true;
            }
            fq[n]++;
        }
        return false;
    }
};