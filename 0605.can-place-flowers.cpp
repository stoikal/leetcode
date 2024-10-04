// https://leetcode.com/problems/can-place-flowers/

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if (n == 0) return true;

        for (int i = 0; i < flowerbed.size(); ++i) {
            if (flowerbed[i] == 1) continue;

            int prev = (i - 1) < 0 ? 0 : flowerbed[i - 1];
            int next = (i + 1) < flowerbed.size() ? flowerbed[i + 1] : 0;

            if (prev == 1 || next == 1) continue;

            n--;
            i++;

            if (n == 0) return true;
        }

        return n == 0;
    }
};