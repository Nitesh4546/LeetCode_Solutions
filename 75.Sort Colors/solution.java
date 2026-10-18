class Solution {
    public void sortColors(int[] nums) {
        int n = nums.length;
        int n0 = 0;
        int n1 = 0;
        int n2 = 0;
        for(int i=0;i<n;i++){
            if(nums[i]==0) n0++;
            else if(nums[i]==1) n1++;
            else n2++;
        }
        int i = 0;
        while(i<n){
            if(n0!=0){
                nums[i]=0;
                n0--;
            }else if(n1!=0){
                nums[i]=1;
                n1--;
            }else{
                nums[i]=2;
                n2--;
            }
            i++;
        }

    }
}