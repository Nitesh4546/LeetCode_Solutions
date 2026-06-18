class Solution {
    public int arrangeCoins(int n) {
        long  l = 1;
        long  r = n;
        long  res = 0;
        while(l<=r){
            long mid = l+(r-l)/2;
            long row = mid*(mid + 1)/2;
            if(row > n){
                r = mid-1;
            }else{
                if(res<mid){
                    res = mid;
                }
                l = mid+1;
            }
        }
        return (int)res;
    }
}