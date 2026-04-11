class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // init a set (instead of a hash map, bc we don't need the values right away
        std::unordered_set<int> seen;

		for (int n : nums) {
		    if (seen.count(n) == 1) {   // if 'seen' before
		        return true;            // return true
		    } else {
                seen.insert(n);         // add to 'seen'
            }
        }
        return false;
    }
};