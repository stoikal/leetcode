// https://leetcode.com/problems/sqrtx/

class Solution {
public:
    int mySqrt(int N) {
        if (N == 0) return 0;
        long msb = (long)(log2(N));
        cout << msb << endl;

        // (a = 2^msb)
        long a = 1 << msb;
        cout << a << endl;
        long result = 0;
        while (a != 0) {
    
            // Check whether the current value
            // of 'a' can be added or not
            if ((result + a) * (result + a) <= N) {
                result += a;
            }
    
            // (a = a/2)
            a >>= 1;
        }
    
        // Return the result
        return result;
    }
};