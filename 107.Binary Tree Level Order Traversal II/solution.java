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
    public List<List<Integer>> levelOrderBottom(TreeNode root) {
        if(root == null) {
            return new ArrayList<>();
        }
        int level = 0;
        Queue<TreeNode> q = new LinkedList<>();
        List<List<Integer>> res = new ArrayList<>();

        q.offer(root);
        
        while(!q.isEmpty()) {
            int n = q.size();
            res.add(new ArrayList<>());
            for(int i = 0; i < n; i++) {
                TreeNode curr = q.poll();
                res.get(level).add(curr.val);
                
                if(curr.left != null) {
                    q.offer(curr.left);
                }
                if(curr.right != null) {
                    q.offer(curr.right);
                }
            }
            level++;
        }
        Collections.reverse(res);
        return res;
    }
}