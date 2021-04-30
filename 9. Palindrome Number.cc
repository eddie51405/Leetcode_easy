class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        } else {
            std::string tmp = std::to_string(x);
            int size = tmp.size();
            for (int i = 0; i < size/2; i++) {
                if (tmp[i] != tmp[size-1-i]) {
                    return false;
                }
            }
        }
        return true;
    }
};
