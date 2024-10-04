// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int m = candies[0];

        for (int i = 1; i < candies.size(); ++i) {
            m = max(candies[i], m);
        }

        vector<bool> result;

        for (int n : candies) {
            result.push_back(
                n + extraCandies >= m
            );
        }

        return result;
    }
};