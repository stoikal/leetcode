// https://leetcode.com/problems/keyboard-row/

class Solution {
private:
    vector<string> rows = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};

    int findRow(char c) {
        for (int i = 0; i < rows.size(); i++) {
            if (rows[i].contains(c)) {
                return i;
            }
        }

        return -1;
    }
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> result;

        for (string word : words) {
            int rowIndex = findRow(tolower(word[0]));

            bool isSingleRow = true;

            for (int i = 1; i < word.size(); i++) {
                char c = tolower(word[i]);

                if (!rows[rowIndex].contains(c)) {
                    isSingleRow = false;
                    break;
                }
            }

            if (isSingleRow) {
                result.push_back(word);
            }
        }

        return result;
    }
};