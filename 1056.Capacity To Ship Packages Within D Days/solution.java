class Solution {
    public boolean canship(int[] weights, int days, int cap){
        int totaldays = 1;
        int load = 0;
        for(int i:weights){
            if(load+i>cap){
                totaldays++;
                load = i;
                if(totaldays>days) return false;
            }else{
                load += i;
            }
        }
        return true;
    }
    public int shipWithinDays(int[] weights, int days) {
        int left = 0;
        int right = 0;
        for(int i:weights){
            if(i>left){
                left = i;
            }
            right +=i;
        }
        int res = right;

        while(left<=right){
            int mid = left+(right-left)/2;

            if(canship(weights,days,mid)){
                res = mid;
                right = mid - 1;
            }else{
                left = mid + 1;
            }
        }
        return res;
    }
}