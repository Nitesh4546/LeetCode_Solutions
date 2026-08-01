class Solution {
    public int numSubarrayProductLessThanK(int[] nums, int k) {
        int c = 0;
        if(k <= 1){
            return 0;
        }
        int n = nums.length;
        int j = 0;
        int prod = 1;
        for(int i = 0; i < n; i++) {
            prod *= nums[i];
            while(prod >= k) {
                prod /= nums[j++];
            }
            c = c + i - j + 1;
        }
        return c;
    }
}