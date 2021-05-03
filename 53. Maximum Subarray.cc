class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // Time Limit Exceeded
        int size = nums.size();
        int sum = -1000000;
        for (int i = 1; i < size + 1; i++) {
            for (int j = 0; j < size - i + 1; j++) {
                int tmp = 0;
                for (int k = j; k < j + i; k++) {
                    tmp += nums[k];
                }
                if (tmp > sum) {
                    sum = tmp;
                }
            }
        }
        return sum;
    }
};
