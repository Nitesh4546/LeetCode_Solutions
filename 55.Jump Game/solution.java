class Solution {
    public boolean canJump(int[] nums) {
        // int n = nums.length;
        // boolean[] dp = new boolean[n];
        // dp[n-1] = true;

        // for(int i=n-2;i>=0;i--){
        //     int jump = Math.min(i+nums[i],n-1);
        //     for(int j = i+1;j<=jump;j++){
        //         if(dp[j]){
        //             dp[i]=true;
        //             break;
        //         }
        //     }
        // }
        // return dp[0];
        int n = nums.length;
        int end = n-1;

        for(int i=end-1;i>=0;i--){
            if(i+nums[i]>=end){
                end = i;
            }
        }
        return end == 0;
    }
}