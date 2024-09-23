// https://leetcode.com/problems/remove-element/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cur = 0;
        int len = nums.size();
        for (int i = 0; i < len; ++i) {
            if (nums[i] != val) {
                nums[cur] = nums[i];
                cur++;
            }
        }

        return cur;
    }
};
