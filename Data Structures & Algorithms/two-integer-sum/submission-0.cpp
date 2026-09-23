#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        set<int> uniqueResult;
        unordered_map<int, int> m;
        for (int i =0; i < nums.size(); i++) {
            m[nums[i]] = i;
        }

        for (int j = 0; j < nums.size(); ++j) {
            if (m.count(target - nums[j]) == 1 && m[target-nums[j]] != j) {
                uniqueResult.insert(j);
                uniqueResult.insert(m[target - nums[j]]);
            }
        }

        vector<int> result {uniqueResult.begin(), uniqueResult.end()};

        return result;
    }
};
