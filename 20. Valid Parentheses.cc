class Solution {
public:
    bool isValid(string s) {
        std::vector<char> flag;
        int size = s.size();
        for (int i = 0; i < size; i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                flag.push_back(s[i]);
            } else if (s[i] == ')') {
                if (!flag.empty()) {
                    char tmp = flag.back();
                    flag.pop_back();
                    if (tmp != '(') {
                        return false;
                    }
                } else {
                    return false;
                }
            } else if (s[i] == '}') {
                if (!flag.empty()) {
                    char tmp = flag.back();
                    flag.pop_back();
                    if (tmp != '{') {
                        return false;
                    }
                } else {
                    return false;
                }
            } else if (s[i] == ']') {
                if (!flag.empty()) {
                    char tmp = flag.back();
                    flag.pop_back();
                    if (tmp != '[') {
                        return false;
                    }
                } else {
                    return false;
                }
            }
        }
        if (!flag.empty()) {
            return false;
        }
        return true;
    }
};
