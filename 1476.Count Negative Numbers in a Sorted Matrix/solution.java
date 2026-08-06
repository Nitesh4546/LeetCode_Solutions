class Solution {
    public int countNegatives(int[][] grid) {
        int count = 0;
        for(int row[]: grid){
            int l =0;
            int r = row.length-1;
            int res = row.length;
            while(l<=r){
                int mid = l+(r-l)/2;
                if(row[mid]<0){
                    r = mid-1;
                    res = mid;
                }else{
                    l = mid+1;
                }
            }
            count += (row.length-res);
            
        }
        return count;
    }
}