// https://leetcode.com/problems/plus-one/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        int i = digits.size() - 1;

        while (carry) {
            if (i < 0) {
                digits.insert(digits.begin(), 1);
            } else {
                if (digits[i] == 9) {
                    digits[i] = 0;
                    carry++;
                } else {
                    digits[i]++;
                }
            }

            carry--;
            i--;
        }
        
        return digits;
    }
};
