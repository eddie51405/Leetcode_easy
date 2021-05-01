class Solution {
public:
    int strStr(string haystack, string needle) {
        // std::size_t pos = haystack.find(needle);
        // return pos;

        int size = haystack.size();
        int size2 = needle.size();
        if (size2 == 0) {
            return 0;
        }
        if (size == 0) {
            return -1;
        }
        if (haystack == needle) {
            return 0;
        }
        for (int i = 0; i < size - size2 + 1; i++) {
            std::string tmp = haystack.substr(i, size2);
            if (tmp == needle) {
                return i;
            }
        }
        return -1;
    }
};
