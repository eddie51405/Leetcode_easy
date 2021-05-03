class Solution {
public:
    int lengthOfLastWord(string s) {
        int size = s.size();
        int index[size];
        for (int i = 0; i < size; i++) {
            if (s[i] == ' ') {
                index[i] = 1;
            } else {
                index[i] = 0;
            }
        }
        int flag = 0;
        int ans = 0;
        for (int i = size - 1; i >= 0; i--) {
            if (index[i] == 0) {
                flag = 1;
                ans++;
            }
            if (flag && index[i] == 1) {
                return ans;
            }
        }
        return ans;
    }
};
