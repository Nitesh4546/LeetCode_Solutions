class Solution {
    public boolean helper(int[][] matrix, int ind, int target){
        int[] arr = matrix[ind];
        int l = 0;
        int r = arr.length - 1;

        while(l<=r){
            int mid = l+(r-l)/2;
            if(arr[mid]==target){
                return true;
            }

            if(arr[mid]>target){
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        return false;
    }
    public boolean searchMatrix(int[][] matrix, int target) {
        int n = matrix.length;
        int m = matrix[0].length;//columns

        int[][] intr = new int[n][2];
        
        for(int i = 0;i<n;i++){//row wise loop
            intr[i] = new int[] {matrix[i][0],matrix[i][m-1]};//adding column end elements
        }

        int l = 0;
        int r = n-1;
        boolean res = false;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(intr[mid][0]<= target && intr[mid][1]>=target){
                if(helper(matrix,mid,target)) return true;
            }
            if(intr[mid][0]>target){
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        return false;
    }
}