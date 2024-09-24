// https://leetcode.com/problems/valid-anagram/

class Solution {
public:
    bool isAnagram(string s, string t) {
        for (char c:s) {
            int i = t.find(c);

            if (i == string::npos) return false;

            t.replace(i, 1, "");
        }

        return t.length() == 0;
    }
};