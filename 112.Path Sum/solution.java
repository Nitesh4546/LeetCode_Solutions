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
    public boolean dfs(TreeNode root, int currentSum, int target) {
        //check if the tree is empty
        if (root == null) {
            return false;
        }
        //add the sum of the root.val of current node 
        currentSum += root.val;
        //check if the node is leaf node and if the current sum with the target 
        if (root.left == null && root.right == null) {
            return currentSum == target;
        }
        //goes throught left size and goes through the right 
        return dfs(root.left, currentSum, target) ||  dfs(root.right, currentSum, target);
}
    public boolean hasPathSum(TreeNode root, int targetSum) {
        return dfs(root,0,targetSum);
    }
}