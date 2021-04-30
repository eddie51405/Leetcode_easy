class Solution {
public:
    int romanToInt(string s) {
        int size = s.size();
        int sum = 0;
        for (int i = 0; i < size; i++) {
            switch (s[i]) {
                case 'I':
                    sum += 1;
                    break;
                case 'V':
                    sum += 5;
                    if (i > 0) {
                        if (s[i-1] == 'I') {
                            sum -= 2;
                        }
                    }
                    break;
                case 'X':
                    sum += 10;
                    if (i > 0) {
                        if (s[i-1] == 'I') {
                            sum -= 2;
                        }
                    }
                    break;
                case 'L':
                    sum += 50;
                    if (i > 0) {
                        if (s[i-1] == 'X') {
                            sum -= 20;
                        }
                    }
                    break;
                case 'C':
                    sum += 100;
                    if (i > 0) {
                        if (s[i-1] == 'X') {
                            sum -= 20;
                        }
                    }
                    break;
                case 'D':
                    sum += 500;
                    if (i > 0) {
                        if (s[i-1] == 'C') {
                            sum -= 200;
                        }
                    }
                    break;
                case 'M':
                    sum += 1000;
                    if (i > 0) {
                        if (s[i-1] == 'C') {
                            sum -= 200;
                        }
                    }
                    break;
            }
        }
        return sum;
    }
};
