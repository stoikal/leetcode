// https://leetcode.com/problems/symmetric-tree/

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
    bool isSymmetric(TreeNode* root) {
        if (!root) return true;

        return isSymmetricTest(root->left, root->right);
    };
    bool isSymmetricTest(TreeNode* left, TreeNode* right) {
        if (!left && !right) return true;
        else if (!left || !right) return false;

        return (
            left->val == right-> val &&
            isSymmetricTest(left->left, right->right) &&
            isSymmetricTest(left->right, right->left)
        );
    }
};