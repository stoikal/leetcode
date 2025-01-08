// https://leetcode.com/problems/defanging-an-ip-address/

class Solution {
public:
    string defangIPaddr(string address) {
        size_t index = 0;
        while (true) {
            index = address.find(".", index);
    
            if (index == string::npos) break;

            address.replace(index, 1, "[.]");
        
            index += 3;
        }

        return address;
    }
};
