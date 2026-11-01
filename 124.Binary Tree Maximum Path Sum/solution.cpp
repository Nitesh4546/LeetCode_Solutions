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
    int res = -1001;
    int solve(TreeNode *root) {
        if(root == nullptr) {
            return 0;
        }
        int l = solve(root->left);
        int r = solve(root->right);

        int opt1 = l + r + root->val;
        int opt2 = max(l, r) + root->val;
        int opt3 = root->val;
        res = max({res, opt1, opt2, opt3});
        return max(opt3, opt2);
    }
    int maxPathSum(TreeNode* root) {
        solve(root);
        return res;
    }
};