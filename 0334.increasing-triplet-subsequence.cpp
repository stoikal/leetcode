// https://leetcode.com/problems/increasing-triplet-subsequence/



class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        vector<int> temp = {INT_MAX, nums[0]};

        for (int i = 1; i < nums.size(); ++i) {
            if (temp.size() == 2) {
                if (nums[i] > temp[1]) {
                    temp.push_back(nums[i]);
                } else if (nums[i] < temp[1]) {
                    temp[1] = nums[i];
                }
            } else {
                if (nums[i] > temp[2]) {
                    return true;
                } else if (nums[i] > temp[1]) {
                    temp[2] = nums[i];
                } else if (nums[i] > temp[0]) {
                    temp[1] = temp[0];
                    temp[2] = temp[1];
                    temp[0] = INT_MAX;
                } else {
                    temp[0] = nums[i];
                }
            
            }
        }

        return false;
    }
};