/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public void traversal(TreeNode node, ArrayList<Integer> res) {
        if(node == null) {
            return;
        }
        res.add(node.val);
        traversal(node.left, res);
        traversal(node.right, res);
    }
    public void flatten(TreeNode root) {
        if(root == null) {
            return;
        }
        ArrayList<Integer> res = new ArrayList<>();
        traversal(root, res);
        // Collections.sort(res);
        int n = res.size();
        
        root.val = res.get(0);
        TreeNode current = root;
        for (int i = 1; i < n; i++) {
            current.right = new TreeNode(res.get(i)); 
            current.left = null;
            current = current.right;      
        }
    }
}