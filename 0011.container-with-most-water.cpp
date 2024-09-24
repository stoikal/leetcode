// https://leetcode.com/problems/container-with-most-water/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int a = 0;
        int i = 0;
        int j = height.size() - 1;
    
        while (i < j) {
            int h = min(height[i], height[j]);
            a = max(a, (j - i) * h);
    
            while (height[i] <= h && i < j) i++;
            while (height[j] <= h && i < j) j--;
        }
    
        return a;
    }
};