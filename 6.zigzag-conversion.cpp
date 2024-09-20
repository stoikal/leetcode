// https://leetcode.com/problems/zigzag-conversion/

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) {
            return s;
        }

        vector<vector<char>> rows(numRows);

        int index = 0;
        int movement = 1;

        for (char c : s) {
            rows[index].push_back(c);

            if (index == 0) {
                movement = 1;
            } else if (index == numRows - 1) {
                movement = -1;
            }
            
            index += movement;
        }

        string result = "";

        for (vector<char> v : rows) {
            for (char c : v) {
                result += c;
            }
        }

        return result;
    }
};