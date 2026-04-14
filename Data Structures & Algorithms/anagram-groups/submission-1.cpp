class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, vector<string>> groups;
        for (string word : strs) {
            string key = word;
            std::sort(key.begin(), key.end());
            groups[key].push_back(word);
        }
        vector<vector<string>> result;
        for (auto& [key, anagramGroups] : groups) {
            result.push_back(anagramGroups);
        }
        return result;
    }
};