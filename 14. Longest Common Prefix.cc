class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        std::string ans;
        int size = 200;
        int strs_size = strs.size();
        for (int i = 0; i < strs_size; i++) {
            if (strs[i].size() < size) {
                size = strs[i].size();
            }
        }
        for (int i = 0; i < size; i++) {
            char tmp = strs[0][i];
            for (size_t j = 1; j < strs_size; j++) {
                if (tmp != strs[j][i]) {
                    return ans;
                }
            }
            ans += strs[0][i];
        }
        return ans;
    }
};
