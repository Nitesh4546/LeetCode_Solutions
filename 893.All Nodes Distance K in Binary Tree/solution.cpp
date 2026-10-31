/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* start, int d) {
        vector<int> res;
        if(!root) {
            return res;
        }
        unordered_map<TreeNode*, TreeNode*> rec;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            int n = q.size();

            while(n--) {
                TreeNode* temp = q.front();q.pop();
                if(temp->left) {
                    rec[temp->left] = temp;
                    q.push(temp->left);
                }
                if(temp->right) {
                    rec[temp->right] = temp;
                    q.push(temp->right);
                }
            }
        }
        // int res = -1;
        // visited
        set<int> vis;
        // TreeNode *sta = find_(root, start); 
        vis.insert(start->val);
        q.push(start);
        
        while(!q.empty()) {
            int n = q.size();
            if(d == 0) {
                break;
            }
            while(n--) {
                TreeNode* temp = q.front();q.pop();
                
                // left
                if(temp->left && vis.find(temp->left->val) == vis.end()) {
                    vis.insert(temp->left->val);
                    q.push(temp->left);
                }

                // right
                if(temp->right && vis.find(temp->right->val) == vis.end()) {
                    vis.insert(temp->right->val);
                    q.push(temp->right);
                }

                // parent
                if(rec[temp] && vis.find(rec[temp]->val) == vis.end()) {
                    q.push(rec[temp]);
                    vis.insert(rec[temp]->val);
                }
            }
            d--;
        }
        while(!q.empty()) {
            res.push_back(q.front()->val);
            q.pop();
        }
        return res;
    }
};