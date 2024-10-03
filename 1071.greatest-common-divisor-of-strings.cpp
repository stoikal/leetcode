// https://leetcode.com/problems/greatest-common-divisor-of-strings

class Solution {
public:
    bool canDivide(const string& str, const string& sub) {
        int strLen = str.length();
        int subLen = sub.length();

        if (strLen % subLen) return false;

        for (int i = 0; i < strLen; i += subLen) {
            int found = str.find(sub, i);
  
            if (found != i) return false;
        }

        return true;
    }
    string gcdOfStrings(string str1, string str2) {
        string longer = str1;
        string shorter = str2;

        if (str2.length() > str1.length()) {
            longer = str2;
            shorter = str1;
        }

        int len = shorter.length();

        for (int i = 0; i < len; i++){
            string sub = shorter.substr(0, len - i);

            if (canDivide(shorter, sub) && canDivide(longer, sub)) {
                return sub;
            }
        }

        return "";
    }
};