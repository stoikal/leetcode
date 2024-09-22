// https://leetcode.com/problems/roman-to-integer/

class Solution {
public:
    int romanToInt(string s) {
        map<char, int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;

        int r = mp[s[0]];
        int prev = r;
        const int len = s.size();

        for (int i = 1; i < len; ++i) {
            int v = mp[s[i]];

            if (v > prev) {
                r -= prev;
                r += v - prev;
            } else {
                r += v;
            }

            prev = v;
        }

        return r;
    }
};