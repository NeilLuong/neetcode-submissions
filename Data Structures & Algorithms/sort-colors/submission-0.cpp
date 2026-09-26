class Solution {
public:
    int partition(vector<int>& nums, int left, int right) {
        int middle = left + (right - left) / 2;
        swap(nums[middle], nums[right-1]);

        if (nums[left] > nums[right]) {
            swap(nums[left], nums[right]);
        }
        if (nums[right-1] < nums[left]) {
            swap(nums[right-1], nums[left]);
        }
        if (nums[right-1] > nums[right]) {
            swap(nums[right-1], nums[right]);
        }

        int pivot = nums[right-1];
        int i = left;
        int j = right-1;

        while (true) {
            while (nums[++i] < pivot);
            while (nums[--j] > pivot);
            if (i > j) break;
            swap(nums[i], nums[j]);
        }

        nums[right-1] = nums[i];
        nums[i] = pivot;
        return i; 
    }


    void quick_sort(vector<int>& nums, int left, int right) {
        if (right <= left+1) {
            if (right == left + 1 && nums[right] < nums[left]) {
                swap(nums[right], nums[left]);
            }
            return;
        }

        int j = partition(nums, left, right);
        quick_sort(nums, left, j-1);
        quick_sort(nums, j+1, right);
    }

    void sortColors(vector<int>& nums) {
        quick_sort(nums, 0, nums.size() - 1);
    }
};