// https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> r {nums[0]};
        int prev = nums[0];

        for (int i = 1; i < nums.size(); ++i) {
            int n = nums[i];
 
            if (prev != n) {
                r.push_back(n);
                prev = n;
            }
        }

        nums = r;
        return nums.size();
    }
};