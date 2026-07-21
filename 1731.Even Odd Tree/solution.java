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
    public boolean isEvenOddTree(TreeNode root) {
        Queue<TreeNode> q = new LinkedList<>();
        ArrayList<ArrayList<Integer>> arr = new ArrayList<>();
        int level = 0;

        q.offer(root);
        while(!q.isEmpty()) {
            int n = q.size();
            int curr = 0;
            arr.add(new ArrayList<>());

            for(int i = 0; i < n; i++) {
                TreeNode temp = q.poll();
                
                if(level % 2 == 0 && temp.val % 2 == 0) return false; //even index with even
                if(level % 2 != 0 && temp.val % 2 != 0) return false; //odd index with odd
                
                arr.get(level).add(temp.val);

                if(temp.left != null) {
                    q.offer(temp.left);
                }
                if(temp.right != null) {
                    q.offer(temp.right);
                }
            }
            level++;
        }

        //checking for strctely incr/decres sing
        for(int i = 0; i < level; i++) {
            if(i % 2 != 0) {// odd decreasing
                int c = arr.get(i).size();
                for(int j = 1; j < c; j++) {
                    if(arr.get(i).get(j) >= arr.get(i).get(j - 1)) {
                        return false;
                    }
                }
            }else {//even increasing 
                int c = arr.get(i).size();
                for(int j = 1; j < c; j++) {
                    if(arr.get(i).get(j) <= arr.get(i).get(j - 1)) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
}