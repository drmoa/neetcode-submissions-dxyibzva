class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";
        for (string str : strs) {
            result += to_string(str.length()) + "#" + str;
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        int i = 0;
        while (i < s.length()) {
            int j = s.find('#', i);
            int length = stoi(s.substr(i, j - i));
            string str = s.substr(j + 1, length);
            strs.push_back(str);
            i = j + 1 + length;
        }
        return strs;
    }
};
