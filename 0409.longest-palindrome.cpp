// https://leetcode.com/problems/longest-palindrome/

class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> pop;

        for (char c:s) {
            if (pop.count(c)) pop[c]++;
            else pop[c] = 1;
        }

        int odd = 0;

        for (const auto& pair : pop) {
            if (pair.second % 2 > 0) odd++;
        }

        return s.length() - max(0, odd - 1);
    }
};