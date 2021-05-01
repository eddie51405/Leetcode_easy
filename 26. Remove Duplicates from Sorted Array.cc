class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 0;
        int size = nums.size();
        if (size == 0) {
            return 0;
        }
        for (int i = 1; i < size; i++) {
            if (nums[index] != nums[i]) {
                index++;
                nums[index] = nums[i];
            }
        }
        return index + 1;
    }
};
