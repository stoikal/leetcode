// https://leetcode.com/problems/search-insert-position/

class Solution {
public:
    int strStr(string haystack, string needle) {
        int r = -1;

        int nLen = needle.length();
        int stop = haystack.length() - nLen;

        for (int i = 0; i <= stop; ++i) {
            string str = haystack.substr(i, needle.length());

            if (str == needle) {
                r = i;
                break;
            }
        }

        return r;
    }
};
