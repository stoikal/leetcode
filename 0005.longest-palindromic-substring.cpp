// https://leetcode.com/problems/longest-palindromic-substring/

class Solution {
    private:
        bool isPalindrome(string s) {
            int left = 0;
            int right = s.length() - 1;
            
            while (left < right) {
                if (s[left] != s[right]) {
                    return false;
                }
                ++left;
                --right;
            }
            
            return true;
        }
    public:
        string longestPalindrome(string s) {
            int curr = s.length();
    
            while (curr > 0) {
                for (size_t i = 0; i + curr <= s.length(); ++i) {
                    const string substr = s.substr(i, curr);
                    if (isPalindrome(substr)) {
                        return substr;
                    }
                }
        
                curr--;
            }
    
            return "";
        }
};
