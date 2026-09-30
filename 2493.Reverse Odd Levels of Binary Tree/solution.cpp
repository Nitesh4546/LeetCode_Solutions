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
    TreeNode* reverseOddLevels(TreeNode* root) {
        queue<TreeNode *> q;
        vector<vector<TreeNode *>> data;
        int level = 0;
        
        q.push(root);
        while(!q.empty()) {
            int len = q.size();
            vector<TreeNode *> temp;

            for(int i = 0; i < len; i++) {
                TreeNode *curr = q.front();
                temp.push_back(curr);
                q.pop();
                if(curr->left != nullptr) {
                    q.push(curr->left);
                }
                if(curr->right != nullptr) {
                    q.push(curr->right);
                }
            }
            if(level % 2) {
                int l = 0;
                int r = len - 1;

                while(l <= r) {
                    swap(temp[l]->val, temp[r]->val);
                    l++;
                    r--;
                }
            }
            level++;
            data.push_back(temp);
        }
        return root;
    }
};