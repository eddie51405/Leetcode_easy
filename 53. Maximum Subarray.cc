class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // Kadane's Algorithm
        int size = nums.size();
        int max_end = nums[0];
        int max_so_far = nums[0];
        for (int i = 1; i < size; i++) {
            max_end = std::max(nums[i], max_end + nums[i]);
            max_so_far = std::max(max_so_far, max_end);
        }
        return max_so_far;
    }
};

// Time Limit Exceeded
// int size = nums.size();
// int ans = -1000000;
// int sum[size];
// for (int i = 1; i < size + 1; i++) {
//     for (int j = 0; j < size - i + 1; j++) {
//         int tmp = 0;
//         for (int k = j; k < j + i; k++) {
//             tmp += nums[k];
//         }
//         if (tmp > sum) {
//             sum = tmp;
//         }
//     }
// }
// return ans;
