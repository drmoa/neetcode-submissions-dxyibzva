#include <queue>

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> count;
        std::priority_queue<std::pair<int, int>> kthLargestCounts;

        for (int num : nums) {
            count[num]++;
        }
        for (auto& [num, tally] : count) {
            kthLargestCounts.push({tally, num});
        }
        vector<int> result;
        for (int i = 0; i < k; i++) {
            auto entry = kthLargestCounts.top();
            result.push_back(entry.second);
            kthLargestCounts.pop();
        }
        return result;
    }
};
