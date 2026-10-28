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
    void helper(TreeNode* root, vector<int>& elements) {
        if(!root) {
            return;
        }
        helper(root->left, elements);
        elements.push_back(root->val);
        helper(root->right, elements);
    }
    int finderls(vector<int>& elements, int tar) {
        int l = 0;
        int r = elements.size() - 1;
        int res = -1;
        while(l <= r) {
            int mid = l + (r - l) / 2;
            if(elements[mid] <= tar) {
                res = elements[mid];
                l = mid  + 1;
            }else {
                r = mid - 1;
            }
        }
        return res;
    }

    int findersl(vector<int>& elements, int tar) {
        int l = 0;
        int r = elements.size() - 1;
        int res = -1;
        
        while(l <= r) {
            int mid = l + (r - l) / 2;
            if(elements[mid] >= tar) {
                res = elements[mid];
                r = mid - 1;
            }else {
                l = mid  + 1;
            }
        }
        return res;
    }
    vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries) {
        vector<vector<int>> res;
        vector<int> elements;
        helper(root, elements);
        // 1 2 3 6 9 13 14 15
        for(int q: queries) {
            res.push_back({finderls(elements, q), findersl(elements, q)});
        }
        return res;
    }
};