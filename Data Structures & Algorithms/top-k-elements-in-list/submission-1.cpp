class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        for (int n : nums) {
            freq[n]++;
        }

        vector<vector<int>> buckets(nums.size() + 1);

        for (auto& [num, count] : freq) {
            buckets[count].push_back(num);
        }

        vector<int> res;

        for (int count = nums.size(); count >= 1; count--) {
            for (int num : buckets[count]) {
                res.push_back(num);

                if (res.size() == k) {
                    return res;
                }
            }
        }

        return res;
    }
};