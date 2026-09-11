class Solution {
    public int[] sortedSquares(int[] nums) {
        int l = 0;
        int r = nums.length-1;
        int[] sqr = new int[r+1];
        int k = r;
        
        while(l<=r){
            int sqrl = nums[l]*nums[l];
            int sqrr = nums[r]*nums[r];
            if(sqrl>sqrr){
                sqr[k] = sqrl;
                l++;
            }else{
                sqr[k] = sqrr;
                r--;
            }
            k--;
        }
        return sqr;
    }
}