// https://leetcode.com/problems/binary-tree-inorder-traversal/description/

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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> A; 

        if (!root) return A;
    
        vector<int> L = inorderTraversal(root->left);
        A.insert(A.end(), L.begin(), L.end());

        A.push_back(root->val);

        vector<int> R = inorderTraversal(root->right);
        A.insert(A.end(), R.begin(), R.end());
    
        return A;
    }  
};