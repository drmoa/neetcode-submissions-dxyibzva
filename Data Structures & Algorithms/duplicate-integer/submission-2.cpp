class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> seen;

        for (int i : nums) {
            std::cout << "Checking: " << i << " | In set? " << seen.count(i) << std::endl;
            if (seen.count(i) == 1) {
                return true;
            } else {
                seen.insert(i);
            }
        }
        return false;
    }
};