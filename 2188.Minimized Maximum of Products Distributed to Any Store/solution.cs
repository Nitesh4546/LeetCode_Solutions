public class Solution {
    public bool checker(int n, int[] quantities, int quan){
        int store = 0;
        foreach(int i in quantities){
            store+=(i+quan-1)/quan;
        }
        return store<=n;

    }
    public int MinimizedMaximum(int n, int[] quantities) {
        int left = 1;
        int right = 0;
        foreach(int i in quantities){
            if(right<i){
                right = i;
            }
        }
        int res=0;
        while(left<=right){
            int mid = left+(right-left)/2;
            if(checker(n,quantities,mid)){
                res = mid;
                right = mid - 1;
            }else{
                left = mid + 1;
            }
        }
        return res;
    }
}