class Solution {
    public boolean check(int[] batteries, long n, long time){
        long target = n*time;
        long sum = 0;
        for(int i=0;i<batteries.length;i++){
            sum+=Math.min(batteries[i],time);
            if(target<=sum){
                return true;
            }
        }
        return false;

    }
    public long maxRunTime(int n, int[] batteries) {
        long total_battery = 0;
        long l = 0;
        for(int i:batteries){
            total_battery+=i; 
            if(l>i){
                l=i;
            }
        }
        long r = total_battery/n;
        long res = 0;
        while(l<=r){
            long mid = l+(r-l)/2;
            if(check(batteries,n,mid)){
                res = mid;
                l = mid+1;
            }else{
                r = mid - 1;
            }
        }
        return res;

    }
}