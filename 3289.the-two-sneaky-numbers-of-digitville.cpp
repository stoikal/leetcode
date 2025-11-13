// https://leetcode.com/problems/the-two-sneaky-numbers-of-digitville/
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> result;
        unordered_map<int, int> map;

        for (size_t i = 0; i < nums.size(); ++i) {
            int num = nums[i];
            map[num]++;

            if (map[num] == 2) {
                result.push_back(num);
            }
        }

        return result;
    }
};

class Solution2 {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> result;

        for (size_t i = 0; i < nums.size() - 1; ++i) {
            if (result.size() == 2) break;

            for (size_t j = i + 1; j < nums.size(); ++j) {
                if (nums[i] == nums[j]) {
                    result.push_back(nums[i]);
                    break;
                }
            }
        }

        return result;
    }
};