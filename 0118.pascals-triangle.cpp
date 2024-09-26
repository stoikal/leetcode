// https://leetcode.com/problems/pascals-triangle/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> rows(numRows);

        for (int i = 0; i < numRows; i++) {
            vector<int> newRow(i + 1, 1);

            for (int j = 1; j < i; j++) {
                newRow[j] = rows[i-1][j-1] + rows[i-1][j];
            }

            rows[i] = newRow;
        }

        return rows;
    }
};