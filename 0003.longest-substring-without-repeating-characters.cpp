// https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            int result = 0;
            string current = "";
    
            for (int i = 0; i < s.length(); i++) {
                char c = s.at(i);
                int index = current.find(c);
    
                if (index != string::npos) {
                    if (result < current.length()) {
                        result = current.length();
                    }
                    
                    current = current.substr(index + 1) + c;
                } else {
                    current += c;
                }
    
                if (i == s.length() - 1) {
                    if (current.length() > result) result = current.length();
                }
    
            }
    
            return result;
        }
    };