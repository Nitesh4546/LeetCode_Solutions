class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int max = 0;
        int size = 0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]==1){
                size++;
                max = Math.max(max,size);
            }else{
                size=0;
            }
        }
        return max;
    }
}