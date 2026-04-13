class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> mapped;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (mapped.count(complement)) {
                return {std::min(mapped[complement], i), std::max(mapped[complement], i)};
            }
            mapped[nums[i]] = i;
        }
    }
};
