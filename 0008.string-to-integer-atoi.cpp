// https://leetcode.com/problems/string-to-integer-atoi/

class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int len = s.length();
        int isPositive = true;
        int result = 0;

        while (i < len && s[i] ==  ' ') i++;

        if (s[i] == '-' || s[i] == '+') {
            if (s[i] == '-') isPositive = false;
            i++;
        }

        while (i < len) {
            char c = s[i];

            if (!isdigit(c)) return result;

            if (isPositive) {
                if (result > INT_MAX / 10) return INT_MAX;
                result *= 10;

                int n = c - '0';
                if (result > INT_MAX - n) return INT_MAX;
                result += n;
            } else {
                if (result < INT_MIN / 10) return INT_MIN;
                result *= 10;

                int n = c - '0';
                if (result < INT_MIN + n) return INT_MIN;
                result -= n;
            }

            i++;
        }

        return result;
    }
};