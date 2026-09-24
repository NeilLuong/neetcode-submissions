class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        for (; i < nums.size(); ++i) {
            if (nums[i] == val) {
                int j = i + 1;
                while (j < nums.size()) {
                    if (nums[j] != val) {
                        int temp = nums[j];
                        nums[j] = nums[i];
                        nums[i] = temp;
                        break;
                    } else {
                        ++j;
                    }
                }
            }
        }

        int count = 0;
        for (auto num : nums) {
            if (num != val) count++;
        }

        return count;
    }
};