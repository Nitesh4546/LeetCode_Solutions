class Solution {
    public boolean caneat(int[] piles,int h, int n){
        long hours = 0;
        for(int i:piles){
            hours+=(long)(i+n-1)/n;
            if(hours>h) return false;
        }
        return hours<=h;
    }
    public int minEatingSpeed(int[] piles, int h) {
        int left = 1;
        int right = 0;
        for(int i:piles){
            if(right<=i){
                right = i;
            }
        }
        int res = right;

        while(left<=right){
            int mid = left+(right-left)/2;
            if(caneat(piles,h,mid)){
                res = mid;
                right = mid - 1;
            }else{
                left = mid + 1;
            }
        }
        return res;
    }
}