class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int result = nums[0];
        int majority = 1;
        int currentCount = 1;
        int current = nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] != current) {
                if (majority < currentCount) {
                    majority = currentCount;
                    result = current;
                } 
                current = nums[i];
                currentCount = 1;  
            } else {
                currentCount++;
            }
        }

        result = currentCount > majority ? current : result; 

        return result;
    }
};