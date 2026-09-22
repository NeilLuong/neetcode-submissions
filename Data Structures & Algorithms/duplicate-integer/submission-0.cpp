#include <unordered_set>

using namespace std;
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen{};

        for(auto num : nums) {
            if (seen.count(num) == 1) {
                return true;
            } else {
                seen.insert(num);
            }
        }

        return false;
    }
};