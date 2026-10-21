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
    int countNodes(TreeNode* root) {
        if(root == nullptr) {
            return 0;
        }
        TreeNode *rightB = root;
        TreeNode *leftB = root;
        int rc = 0; 
        int lc = 0;
        while(rightB) {
            rightB = rightB->right;
            rc++;
        }
        while(leftB) {
            lc++;
            leftB = leftB->left;
        }
        if(rc == lc) {
            return (1 << lc) - 1;
        }
        return 1 + countNodes(root->right) + countNodes(root->left);

    }
};