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
    int sum_ = 0;
    void helper(TreeNode* root) {
        if(!root) {
            return;
        }
        // right
        helper(root->right);
        
        sum_ += root->val;
        root->val = sum_;
        
        helper(root->left);
    }
    TreeNode* convertBST(TreeNode* root) {
        sum_ = 0;
        helper(root);
        return root;
    }
};