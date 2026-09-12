class Solution {
    public int helper(int ind, int[] arr, int sum, int target) {
        if(ind == arr.length) {

            if(sum == target) {
                return 1;
            }
            return 0;
        }
        int add = helper(ind + 1, arr, sum + arr[ind], target);
        int sub = helper(ind + 1, arr, sum - arr[ind], target);
        return add + sub;
    }
    public int findTargetSumWays(int[] nums, int target) {
        // int count  = 0;
        return helper(0, nums, 0, target);
        // return count;
    }
}