/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node *helper(Node* node, unordered_map<Node*, Node*>& rec) {
        vector<Node*> neg;
        Node* clone = new Node(node->val);
        rec[node] = clone;

        for(auto &it: node->neighbors) {
            if(rec.find(it) != rec.end()) {
                neg.push_back(rec[it]);
            }else {
                neg.push_back(helper(it, rec));
            }
            clone->neighbors = neg;
        }
        return clone;
    }
    Node* cloneGraph(Node* node) {
        unordered_map<Node*, Node*> rec;
        if(node == NULL) {
            return NULL;
        }
        if(node->neighbors.size() == 0) {
            Node *clone = new Node(node->val);
            return clone;
        }
        return helper(node, rec);
    }
};