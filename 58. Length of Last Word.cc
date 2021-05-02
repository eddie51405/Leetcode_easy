class Solution {
public:
    int lengthOfLastWord(string s) {
        //  TODO
        int size = s.size();
        int ans = 0;
        int tmp = 0;
        for (int i = 0; i < size; i++) {
            if (s[i] == ' ') {
                ans = tmp;
                tmp = 0;
            } else {
                tmp += 1;
                if (i + 1 == size && s[i] != ' ') {
                    ans = tmp;
                }
            }

        }
        return ans;
    }
};
