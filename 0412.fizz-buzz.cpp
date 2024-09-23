// https://leetcode.com/problems/fizz-buzz/

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> r;

        for (int i = 1; i <= n; ++i) {
            bool div5 = i % 5 == 0;
            bool div3 = i % 3 == 0;

            if (div5 && div3) r.push_back("FizzBuzz");
            else if (div3) r.push_back("Fizz");
            else if (div5) r.push_back("Buzz");
            else r.push_back(to_string(i));
        }

        return r;
    }
};
