// https://leetcode.com/problems/decode-the-message

class Solution {
public:
    string decodeMessage(string key, string message) {
        string alphabet = "zyxwvutsrqponmlkjihgfedcba";

        map<char, char> table;
        table[' '] = ' ';

        for (char c : key) {
            if (c == ' ') continue;

            if (table.find(c) == table.end()) {
                table[c] = alphabet.back();
                alphabet.pop_back();
            }
        }

        string result;

        for (char c : message) {
            result += table[c];
        }

        return result;
    }
};