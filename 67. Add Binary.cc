class Solution {
public:
    string addBinary(string a, string b) {
        int a_size = a.size();
        int b_size = b.size();
        string aa, bb;
        if (a_size > b_size) {
            aa = a;
            bb = b;
        } else {
            aa = b;
            bb = a;
        }
        string small;
        int aa_size = aa.size();
        int bb_size = bb.size();
        for (int i = 0; i < aa_size; i++) {
            if (i < aa_size - bb_size) {
                small += '0';
            }
        }
        small += bb;
        int carry = 0;
        for (int i = aa_size - 1; i >= 0; i--) {
            if (carry) {
                if (aa[i] == '0' && small[i] == '0') {
                    aa[i] = '1';
                    carry = 0;
                } else if (aa[i] == '0' && small[i] == '1' || aa[i] == '1' && small[i] == '0') {
                    aa[i] = '0';
                    carry = 1;
                } else if (aa[i] == '1' && small[i] == '1') {
                    aa[i] = '1';
                    carry = 1;
                }
            } else {
                if (aa[i] == '0' && small[i] == '0') {
                    aa[i] = '0';
                } else if (aa[i] == '0' && small[i] == '1' || aa[i] == '1' && small[i] == '0') {
                    aa[i] = '1';
                } else if (aa[i] == '1' && small[i] == '1') {
                    aa[i] = '0';
                    carry = 1;
                }
            }
        }
        if (carry) {
            return std::string("1") + aa;
        } else {
            return aa;
        }
    }
};
