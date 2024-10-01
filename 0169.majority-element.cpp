// https://leetcode.com/problems/majority-element/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mp;

        for (int n : nums) {
            mp[n]++;
        }

        int len = nums.size();
    
        for (auto const& [key, val] : mp) {
            if (val > len / 2) {
                return key;
            }
        }

        return 0;
    }
};