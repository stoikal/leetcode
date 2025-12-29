// https://leetcode.com/problems/contains-duplicate/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> counts;

        for (const auto& num : nums) {
            counts[num]++;

            if (counts[num] > 1) {
                return true;
            }
        }
        
        return false;
    }
};