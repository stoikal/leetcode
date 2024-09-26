// https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if (nums.size() == 0) return nullptr;

        int mid = nums.size() / 2;

        TreeNode* node = new TreeNode(nums[mid]);

        vector<int>left = vector<int>(nums.begin(), nums.begin() + mid);
        node->left = sortedArrayToBST(left);

        vector<int>right = vector<int>(nums.begin() + mid + 1, nums.end());
        node->right = sortedArrayToBST(right);

        return node;
    }
};