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
    int size_(TreeNode* root) {
        if(root == nullptr) {
            return 0;
        }
        return 1 + size_(root->left) + size_(root->right);
    }

    int sum_(TreeNode* root) {
        if(root == nullptr) {
            return 0;
        }
        return root->val + sum_(root->left) + sum_(root->right);
    }

    void tra(TreeNode* root, int& ans) {
        if(root == nullptr) {
            return;
        }
        
        int current_size = size_(root);
        int current_sum = sum_(root);
        
        if(current_sum / current_size == root->val) {
            ans++;
        }
        
        tra(root->left, ans);
        tra(root->right, ans);
    }
    int averageOfSubtree(TreeNode* root) {
        int ans = 0;
        tra(root, ans);
        return ans;
    }
};