// https://leetcode.com/problems/island-perimeter/

class Solution {
private:
    bool isLand(vector<vector<int>>& grid, int rowIndex, int colIndex) {
        if (rowIndex < 0) return false;
        if (rowIndex >= grid.size()) return false;
        if (colIndex < 0) return false;
        if (colIndex >= grid[0].size()) return false;
        
        
        return grid[rowIndex][colIndex] == 1;
    }

    int countNeighbors(vector<vector<int>>& grid, int rowIndex, int colIndex) {
        int num = 0;

        if (isLand(grid, rowIndex - 1, colIndex)) num++;
        if (isLand(grid, rowIndex, colIndex - 1)) num++;
        if (isLand(grid, rowIndex, colIndex + 1)) num++;
        if (isLand(grid, rowIndex + 1, colIndex)) num++;

        std::cout << num << "\n";
        return num;
    }

    int countPerimeter(int neighborCount) {
        int result = 4 - neighborCount;

        return result > 0 ? result : 0;
    }
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int sum = 0;
        for (int rowIndex = 0; rowIndex < grid.size(); rowIndex++) {
            vector<int> row = grid[rowIndex];

            for (int colIndex = 0; colIndex < row.size(); colIndex++) {
                bool isLand = row[colIndex] == 1;

                if (isLand) {
                    int neighborCount = countNeighbors(grid, rowIndex, colIndex);
                    int p = countPerimeter(neighborCount);

                    sum += p;
                }
            }
        }

        return sum;
    }
};