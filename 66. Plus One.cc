class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();
        int carry = 0;
        if (digits[size-1] + 1 == 10) {
            carry = 1;
            digits[size-1] = 0;
        } else {
            digits[size-1]++;
        }

        for (int i = size - 2; i >= 0; i--) {
            if (carry) {
                if (digits[i] + 1 == 10) {
                    digits[i] = 0;
                    if (i == 0) {
                        digits.insert(digits.begin(), 1);
                    }
                } else {
                    digits[i]++;
                    carry = 0;
                }
            }
        }
        if (carry && size == 1) {
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};
