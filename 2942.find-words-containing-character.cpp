// https://leetcode.com/problems/find-words-containing-character

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> result;

        for (size_t i = 0; i < words.size(); i++) {
            string word = words[i];

            if (word.find(x) != std::string::npos) {
                result.push_back(i);
            } 
        }

        return result;
    }
};