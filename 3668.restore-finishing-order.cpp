// https://leetcode.com/problems/restore-finishing-order/

class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> result;

        for (size_t i = 0; i < order.size(); ++i) {
            int num = order[i];

            int cnt = count(friends.begin(), friends.end(), num);

            if (cnt > 0) {
                result.push_back(num);
            }
        }

        return result;
    }
};