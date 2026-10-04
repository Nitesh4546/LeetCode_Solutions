class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        int min = Integer.MAX_VALUE;
        int n = nums.length;
        int curr = 0;
        int j=0;
        for(int i=0;i<n;i++){
            curr += nums[i];
            while(curr>=target){
                min = Math.min(i-j+1,min);
                curr-=nums[j];
                j++;
            }
        }
        if(min==Integer.MAX_VALUE){
            return 0;
        }
        return min;
    }
}