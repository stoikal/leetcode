// https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s) {
        stack<char> unclosed;

        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                unclosed.push(c);
            } else {
                if (unclosed.empty()) return false;
                if (c == ')' && unclosed.top() != '(') return false;
                if (c == ']' && unclosed.top() != '[') return false;
                if (c == '}' && unclosed.top() != '{') return false;

                unclosed.pop();
            }
        }

        return unclosed.empty();
    }
};