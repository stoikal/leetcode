//  https://leetcode.com/problems/find-common-characters/

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> result;

        for (char c : words[0]) {
            result.push_back(string(1, c));
        }

        for (int i = 1; i < words.size(); ++i) {
            string s = words[i];
            vector<string> found;

            for (string e : result) {
                int index = s.find(e);

                if (index >= 0) {
                    s.erase(index, 1);
                    found.push_back(e);
                }
            }

            result = found;
        }

        return result;
    }
};
