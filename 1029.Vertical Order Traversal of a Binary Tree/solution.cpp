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
    map<int, vector<pair<int, int>>> map_;
    void traversal(TreeNode* node, int row, int col) {
        if(node == nullptr) {
            return;
        }
        traversal(node->left, row  + 1, col - 1);
        map_[col].push_back({row, node->val});
        traversal(node->right, row + 1, col + 1);
    }

    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> res;
        
        traversal(root, 0, 0);        
        
        for(auto &pair: map_) {
            auto &vals = pair.second;
            sort(vals.begin(), vals.end());

            vector<int> temp;
            for(auto &curr: vals) {
                temp.push_back(curr.second);
            }
            res.push_back(temp);
        }
        return res;
    }
};