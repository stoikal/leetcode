// https://leetcode.com/problems/contains-duplicate-ii

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> indices;
    
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            if (
                indices.find(num) != indices.end() &&
                i - indices[num] <= k
            ) {
                return true;
            }
            indices[nums[i]] = i;
        }
        
        return false;
    }
};