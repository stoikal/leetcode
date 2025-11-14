// https://leetcode.com/problems/find-most-frequent-vowel-and-consonant/

class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int> count;

        int size = s.size();

        for (int i = 0; i < size; ++i) {
            count[s[i]]++;
        }

        int vowel_max = 0;
        int consonant_max = 0;

        for (const auto& pair : count) {
            if (pair.first == 'a' || pair.first == 'i' || pair.first == 'u' || pair.first == 'e' || pair.first == 'o') {
                vowel_max = max(pair.second, vowel_max);
            } else {
                consonant_max = max(pair.second, consonant_max);
            }
        }

        return vowel_max + consonant_max;
    }
};