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
    public int count = 0;
    public int countNode(TreeNode root) {
        if(root == null) {
            return -1;
        }
        int l = countNode(root.left);
        int r = countNode(root.right);

        int curr = Math.max(root.val, Math.max(l, r));

        if(root.val >= curr) {
            count++;
        }
        return curr;
    }
    public int countDominantNodes(TreeNode root) {
        if(root == null) {
            return 0;
        }
        count = 0;
        countNode(root);
        return count;
    }
}