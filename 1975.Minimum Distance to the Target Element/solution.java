//Enjoy the questions Govind
class Solution {
    public int getMinDistance(int[] nums, int target, int start) {
        int n = nums.length;
        int temp = 0;
        int min = Integer.MAX_VALUE;
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                temp = Math.abs(i-start);
                if(min>temp){
                    min = temp;
                }
            }
        }
        return min; 
    }
}