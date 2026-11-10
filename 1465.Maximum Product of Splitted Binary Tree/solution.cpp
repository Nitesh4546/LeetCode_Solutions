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
    int totalSum = 0;
    long long res = 0;
    int MOD = 1e9 + 7;
    int sum__(TreeNode* node) {
        if(!node) {
            return 0;
        }
        return node->val + sum__(node->left) + sum__(node->right);
    }
    int helper(TreeNode* node) {
        if(!node) {
            return 0;
        }
        int l = helper(node->left);
        int r = helper(node->right);
        int currSum = node->val + l + r;
        long long currProd = (long long)currSum * (totalSum - currSum);
        res = max(res, currProd);
        return currSum;
    }


    int maxProduct(TreeNode* root) {
        totalSum = sum__(root);
        helper(root);
        return res % MOD;
    }
};