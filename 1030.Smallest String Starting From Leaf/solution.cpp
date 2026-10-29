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
    vector<string> paths;
    void helper(TreeNode* root, string& temp) {
        if(!root) {
            return;
        }
        temp.push_back(root->val + 'a');
        // leaf
        if(!root->left && !root->right) {
            paths.push_back(temp);
        }else {
            helper(root->left, temp);
            helper(root->right, temp);
        }
        temp.pop_back();
    }
    string smallestFromLeaf(TreeNode* root) {
        paths.clear();
        string temp = "";
        helper(root, temp);
        for(string& path: paths) {
            reverse(path.begin(), path.end());
        }
        sort(paths.begin(), paths.end());
        return paths[0];
    }
};