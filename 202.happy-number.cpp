// https://leetcode.com/problems/happy-number/

// this submission is accepted
// but the top answer use vastly more efficient approach
// using hare and tortoise 

class Solution {
public:
    bool isHappy(int n) {
        std::vector<int> tracker;
        return recIsHappy(n, tracker);
    }

private:
    bool recIsHappy(int n, std::vector<int>& tracker) {
        if (n == 1) return true;

        if (std::find(tracker.begin(), tracker.end(), n) != tracker.end()) {
            return false;
        }

        int num = sumOfDigitSquares(n);
        tracker.push_back(n);

        return recIsHappy(num, tracker);
    }

    int sumOfDigitSquares(int n) {
        int sum = 0;

        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }

        return sum;
    }
};