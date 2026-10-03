class Solution {
    private static final int MOD = 1000000007;
    public int xorAfterQueries(int[] nums, int[][] queries) {
        for(int[] arr: queries){
            for(int idx = arr[0];idx<=arr[1];idx+=arr[2]){
                nums[idx] = (int)(((long)nums[idx]*(long)arr[3])%MOD);
            }
        }
        int res = 0;
        for(int i:nums){
            res^=i;
        }
        return res;
        
    }
}