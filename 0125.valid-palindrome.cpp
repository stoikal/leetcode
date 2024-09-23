// https://leetcode.com/problems/valid-palindrome/

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {
            if (isalnum(s[left]) && isalnum(s[right])) {
                if (tolower(s[left]) != tolower(s[right])) return false;
                right--;
                left++;
            } else if (isalnum(s[left])) {
                right--;
            } else {
                left++;
            }
        }

        return true;
    }
};
