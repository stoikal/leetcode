// https://leetcode.com/problems/length-of-last-word/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int end = s.length() - 1;
        int len = 0;

        for (int i = end; i >= 0; --i) {
            if (s[i] == ' ') {
                if (len) break;
            } else {
                len++;
            }
        }

        return len;
    }
};