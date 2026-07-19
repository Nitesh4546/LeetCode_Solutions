class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length;
        long sum_nums = 0;
        long sum_exp = (n*n+n)/2;
        for(int i:nums){
            sum_nums+=i;
        }
        return (int)(sum_exp-sum_nums);
    }
}