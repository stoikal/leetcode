// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/

class Solution {
public:
    int strStr(string haystack, string needle) {
        int r = -1;

        int nLen = needle.length();
        int stop = haystack.length() - nLen;

        for (int i = 0; i <= stop; ++i) {
            string str = haystack.substr(i, nLen);

            if (str == needle) {
                r = i;
                break;
            }
        }

        return r;
    }
};