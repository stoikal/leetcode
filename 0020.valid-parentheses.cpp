// https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s) {
        map<char, char> pair;
        pair['('] = ')';
        pair['{'] = '}';
        pair['['] = ']';

        stack<char> unclosed;

        for (char c : s) {
            if (pair.count(c) != 0) {
                unclosed.push(c);
            } else {
                if (unclosed.empty()) return false;   
                if (c != pair[unclosed.top()]) return false;

                unclosed.pop();
            }
        }

        return unclosed.empty();
    }
};
