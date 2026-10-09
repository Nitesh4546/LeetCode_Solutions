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
    public int maxLevelSum(TreeNode root) {
        Queue<TreeNode> q = new LinkedList<>();
        int level = 1;
        int res = 1;
        int sum = Integer.MIN_VALUE;

        q.offer(root);
        while(!q.isEmpty()) {
            int n = q.size();
            int curr = 0;
            for(int i = 0; i < n; i++) {
                TreeNode temp = q.poll();
                curr += temp.val;

                if(temp.left != null) {
                    q.offer(temp.left);
                }
                if(temp.right != null) {
                    q.offer(temp.right);
                }
            }
            if(curr > sum) {//smallest level
                sum = curr;
                res = level;
            }
            level++;
        }
        return res;
    }
}