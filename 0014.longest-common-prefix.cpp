// https://leetcode.com/problems/longest-common-prefix/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string longest = strs[0];

        int len = strs.size();
        for (int i = 1; i < len; ++i) {
            string curr = strs[i];
            int len = curr.length();
            string same = "";

            for (int j = 0; j < len; ++j) {
                char c = curr[j];
                if (c == longest[j]) {
                    same += c;
                } else {
                    break;
                }
            }

            if (same == "") return "";

            longest = same;
        }

        return longest;
    }
};