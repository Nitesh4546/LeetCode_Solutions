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
    TreeNode* helper(TreeNode* root, set<int>& to_del, vector<TreeNode*>& res) {
        if(!root) {
            return nullptr;
        }
        root->left = helper(root->left, to_del, res);
        root->right = helper(root->right, to_del, res);

        if(to_del.find(root->val) != to_del.end()) {
            if(root->left) {
                res.push_back(root->left);
            }
            if(root->right) {
                res.push_back(root->right);
            }
            return nullptr;
        }
        return root;
    }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        vector<TreeNode*> res;
        set<int> to_del(to_delete.begin(), to_delete.end());
        root = helper(root, to_del, res);
        if(root) {
            res.push_back(root);
        }
        return res;
    }
};