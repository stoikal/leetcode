// https://leetcode.com/problems/reverse-vowels-of-a-string/

class Solution {
public:
    bool isVowel (char c) {
        string vowels = "aiueoAIUEO";
        return vowels.find(c) != string::npos;
    }

    string reverseVowels(string s) {
        int i = 0;
        int j = s.length() - 1;

        while (i < j) {
            if (isVowel(s[i]) && isVowel(s[j])) {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;

                i++;
                j--;
            }

            if (!isVowel(s[i])) i++;
            if (!isVowel(s[j])) j--;
        }

        return s;
    }
};