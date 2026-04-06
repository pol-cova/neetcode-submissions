class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen; //idx, diff
        for(int i=0; i<(int)nums.size(); i++){
            auto diff=target-nums[i];
            if(seen.count(diff)) return {seen[diff], i};
            seen[nums[i]] = i;
        }
    }
};
