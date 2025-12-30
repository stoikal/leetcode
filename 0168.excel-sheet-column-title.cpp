// https://leetcode.com/problems/excel-sheet-column-title/

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string chars = "ZABCDEFGHIJKLMNOPQRSTUVWXY";
        string result = "";

        while (columnNumber > 0) {
            int n = columnNumber % 26;

            result.push_back(chars[n]);

            if (n == 0) columnNumber -= 1;
            columnNumber /= 26;
        }

        reverse(result.begin(), result.end());
        return result;
    }
};
