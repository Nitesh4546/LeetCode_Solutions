class Solution {
    public int digits(int num){
        int i = 0;
        while(num!=0){
            i++;
            num/=10;
        }
        return i;
    }
    public int findNumbers(int[] nums) {
        int count = 0;
        for(int a:nums){
            if(digits(a)%2==0){
                count++;
            }
        }
        return count;
    }
}