class Solution {
    public boolean[] pathExistenceQueries(int n, int[] nums, int maxDiff, int[][] queries) {
        int size = nums.length;
        int q = queries.length;
        boolean res[] = new boolean[q]; 
        int root[] = new int[size]; 
        root[0] = 0; 
        
        for(int i = 1; i < size; i++) {
            root[i] = ((nums[i] - nums[i - 1]) <= maxDiff) ? root[i - 1] : i; 
        }

        for(int i = 0; i < q; i++) {
            res[i] = root[queries[i][0]] == root[queries[i][1]]; 
        }
        return res; 
    }
}