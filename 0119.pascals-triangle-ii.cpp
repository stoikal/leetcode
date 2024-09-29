// https://leetcode.com/problems/pascals-triangle-ii/

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int numRows = rowIndex + 1;
        vector<vector<int>> rows(numRows);

        for (int i = 0; i < numRows; i++) {
            vector<int> newRow(i + 1, 1);

            for (int j = 1; j < i; j++) {
                newRow[j] = rows[i-1][j-1] + rows[i-1][j];
            }

            rows[i] = newRow;
        }

        return rows.back();
    }
};