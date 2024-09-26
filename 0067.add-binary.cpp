// https://leetcode.com/problems/add-binary/

class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length() - 1;
        int j = b.length() - 1;

        string r = "";
        int carry = 0;
    
        while (i >= 0 || j >= 0 || carry > 0) {
            int sum = carry;

            if (i >= 0) sum += a[i--] - '0';
            if (j >= 0) sum += b[j--] - '0';

            if (sum % 2) r += '1';
            else r += '0';

            carry = sum / 2;
        }
        
        reverse(r.begin(), r.end()); 
        return r;
    }
};