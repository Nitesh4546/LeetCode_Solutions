class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        for(int i=0;i<nums.length;i++){
            int curr = Math.abs(nums[i]);
            if(nums[curr-1]>0){
                nums[curr-1] *=-1;
            }
        }
        List<Integer> dis = new ArrayList<>();
        for(int i=0;i<nums.length;i++){
            if(nums[i]>0){
                dis.add(i+1);
            }
        }
        return dis;
    }
}