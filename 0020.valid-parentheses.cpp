// https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s) {
        map<char, char> pair;
        pair['('] = ')';
        pair['{'] = '}';
        pair['['] = ']';

        vector<char> unclosed = {};

        for (char c : s) {
            if (pair.count(c) != 0) {
                unclosed.push_back(c);
            } else if (unclosed.size() > 0) {
                char u = unclosed.back();

                if (c == pair[u]) {
                    unclosed.pop_back();
                } else {
                    return false;
                }
            } else {
                return false;
            }
        }

        if (unclosed.size() > 0) {
            return false;
        }

        return true;
    }
};