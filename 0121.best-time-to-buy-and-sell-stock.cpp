// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int days = prices.size();
        int minStart = INT_MAX;
        int maxProfit = 0;
    
        for (int i = 0; i < days; ++i) {
            if (prices[i] < minStart) {
                minStart = prices[i];
            }
    
            int profit = prices[i] - minStart;
            if (profit > maxProfit) {
                maxProfit = profit;
            }
        }

        return maxProfit;
    }
};