// https://leetcode.com/problems/median-of-two-sorted-arrays/

class Solution {
private:
    std::vector<int> mergeArr(const std::vector<int>& nums1, const std::vector<int>& nums2) {
        std::vector<int> result;
        int index1 = 0;
        int index2 = 0;

        while (index1 < nums1.size() || index2 < nums2.size()) {
            const int num1 = (index1 < nums1.size()) ? nums1[index1] : INT_MAX;
            const int num2 = (index2 < nums2.size()) ? nums2[index2] : INT_MAX;

            if (num1 <= num2) {
                result.push_back(num1);
                index1++;
            } else {
                result.push_back(num2);
                index2++;
            }
        }

        return result;
    }

public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        const std::vector<int> merged = mergeArr(nums1, nums2);

        if (merged.size() % 2 == 1) {
            return merged[merged.size() / 2];
        }

        const int mid = merged.size() / 2;
            return (static_cast<double>(merged[mid - 1]) + merged[mid]) / 2.0;
        }
};