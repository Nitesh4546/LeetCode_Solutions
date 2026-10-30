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
    void helper(TreeNode* root, vector<TreeNode*>& temp) {
        if(!root) {
            return;
        }
        helper(root->left, temp);
        temp.push_back(root);
        helper(root->right, temp);
    }
    void recoverTree(TreeNode* root) {
        vector<TreeNode*> temp;
        helper(root, temp);
        
        vector<int> arr;
        for(int i = 0; i < temp.size(); i++) {
            arr.push_back(temp[i]->val);
        }
        
        sort(arr.begin(), arr.end());
        
        for(int i = 0; i < temp.size(); i++) {
            temp[i]->val = arr[i];
        }
    }
};