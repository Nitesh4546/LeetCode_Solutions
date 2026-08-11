class Solution {
    //converts the grid to 0 or 1 accordingly to time
    // public int[][] conversion(int[][] grid, int time){
    //     for(int[] rows:grid){
    //         for(int i=0;i<rows.length;i++){
    //             if(rows[i]<=time){
    //                 rows[i] = 1;
    //             }else{
    //                 rows[i] = 0;
    //             }
    //         }
    //     }
    //     return grid;
    // }
    // int[] index = {-1,-1};
    
    // //traverses the grid
    // public void dfs(int[][]grid, int r,int c, int n, boolean[][]vis){
    //     if(r<0||r>=n||c<0||c>=n||vis[r][c]||grid[r][c]==0) return;

    //     vis[r][c] = true;
    //     index[0] = r;
    //     index[1] = c;

    //     dfs(grid,r+1,c,n,vis);
    //     dfs(grid,r-1,c,n,vis);
    //     dfs(grid,r,c+1,n,vis);
    //     dfs(grid,r,c-1,n,vis);
    // }
    
    // //return the last index visited when src is (0,0)
    // public int[] last(int[][] grid,int n){
    //     if(n==0||grid[0][0]==0) return new int[] {-1,-1};
    //     boolean[][] vis = new boolean[n][n];
    //     dfs(grid,0,0,n,vis);
    //     return index;
    // }

    // //return true if we can reach the (n-1,n-1) in time 
    // public boolean check(int time, int[][]grid, int n){
    //     int[][] converted = conversion(grid,time);
    //     // int n = grid.length;
    //     int[] ind = last(converted,n);
    //     if(ind[0]==n-1 && ind[1]==n-1){
    //         return true;
    //     }
    //     return false;
    // }
    public boolean check(int[][]grid,int time, int n){
        boolean[][] vis = new boolean[n][n];
        return dfs(grid,0,0,time,vis,n);
    }
    public boolean dfs(int[][]grid,int r,int c,int time,boolean[][]vis,int n){
        if(r<0||c<0||r>=n||c>=n||grid[r][c]>time||vis[r][c]) return false;
        if(r==n-1 && c==n-1) return true;

        vis[r][c] = true;
        return dfs(grid,r+1,c,time,vis,n)||
        dfs(grid,r-1,c,time,vis,n)||
        dfs(grid,r,c+1,time,vis,n)||
        dfs(grid,r,c-1,time,vis,n);
    }
    public int swimInWater(int[][] grid) {
        int l = 0;
        int r = -1;
        int n = grid.length;

        for(int[] row: grid){
            for(int e:row){
                r = Math.max(r,e);
            }
        }
        int res = 0;
        
        while(l<=r){
            int mid = l+(r-l)/2;
            if(check(grid,mid,n)){
                res = mid;
                r = mid-1;
            }else{
                l = mid + 1;
            }
        }
        return res;
    }
}