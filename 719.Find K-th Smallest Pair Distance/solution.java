class Solution {
    public int helper(int[] nums, int k, int dist){
        int l = 0;
        int count = 0;
        for(int r=0;r<nums.length;r++){
            while(nums[r]-nums[l]> dist){
                l+=1;
            }
            count += r-l;
        }
        return count;
    }
    public int smallestDistancePair(int[] nums, int k) {
        Arrays.sort(nums);

        int left = 0;
        int right = nums[nums.length-1] - nums[0];

        while(left<right){
            int mid = left+(right-left)/2;

            if(helper(nums,k,mid)>=k){
                right = mid;
            }else{
                left = mid + 1;
            }
        }
        return right;
    }
}