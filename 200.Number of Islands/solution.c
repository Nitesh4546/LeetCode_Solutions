void dfs(int r, int c, char** grid, int n, int m){
    if(r<0 || r>=n || c<0 || c>=m || grid[r][c] == '0') return;
    grid[r][c] = '0';
    
    dfs(r+1,c,grid,n,m);
    dfs(r-1,c,grid,n,m);
    dfs(r,c+1,grid,n,m);
    dfs(r,c-1,grid,n,m);
}
int numIslands(char** grid, int gridSize, int* gridColSize) {
    int n = gridSize;
    int m = gridColSize[0];
    int island = 0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]=='1'){
                dfs(i,j,grid,n,m);
                island++;
            }
        }
    }
    return island;
}