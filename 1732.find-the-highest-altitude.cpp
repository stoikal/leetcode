// https://leetcode.com/problems/find-the-highest-altitude

class Solution {
    public int largestAltitude(int[] gain) {
        int currentAlt = 0;
        int highest = currentAlt;

        for (int n : gain) {
            currentAlt += n;

            if (currentAlt > highest) {
                highest = currentAlt;
            }
        }

        return highest;
    }
}