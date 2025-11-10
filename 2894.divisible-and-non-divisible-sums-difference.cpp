// https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/

class Solution {
public:
    int differenceOfSums(int n, int m) {
        int sumDiv = 0;
        int sumIndiv = 0;

        for (int i = 1; i <= n; i++) {
            if (i % m == 0) {
                sumDiv += i;
            } else {
                sumIndiv += i;
            }
        }

        return sumIndiv - sumDiv;
    }
};