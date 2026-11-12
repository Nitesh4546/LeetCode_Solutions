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
    int helper(TreeNode *root, int& count) {
        if (root == nullptr) {
            return -1; 
        }
        
        int l = helper(root->left, count);
        int r = helper(root->right, count);
        
        if (l == 0 || r == 0) {
            count++;
            return 1; 
        }
        
        if (l == 1 || r == 1) {
            return -1; 
        }
        
        return 0; 
    }
    
    int minCameraCover(TreeNode* root) {
        int count = 0;
        if (helper(root, count) == 0) {
            count++;
        }
        return count;
    }
};
