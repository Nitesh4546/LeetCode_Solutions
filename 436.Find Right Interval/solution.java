class Solution {
    public int[] findRightInterval(int[][] intervals) {
        int n = intervals.length;
        int[][] sta = new int[n][2];

        for(int i=0;i<n;i++){
            sta[i][0] = intervals[i][0];
            sta[i][1] = i;
        }
        Arrays.sort(sta,(a,b)->Integer.compare(a[0],b[0]));

        int[] res = new int[n];
        for(int i=0;i<n;i++){
            int target = intervals[i][1];
            res[i] = binarySearch(sta, target);
        }

        return res;
    }

    public int binarySearch(int[][] sta, int tar){
        int l = 0;
        int r = sta.length - 1;
        int res = -1;

        while(l<=r){
            int m = l+(r-l)/2;
            if(sta[m][0]>=tar){
                res = sta[m][1];
                r = m - 1;
            }else{
                l = m + 1;
            }
        }
        return res;
    }
}