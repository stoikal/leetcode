// https://leetcode.com/problems/excel-sheet-column-number/

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;

        for (char c : columnTitle) {
            result *= 26;
            result += (int)c - 64;
        }

        return result;
    }
};