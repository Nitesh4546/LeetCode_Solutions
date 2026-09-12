class Solution {

    int golds = 0;

    public int getMaximumGold(int[][] grid) {

        for(int i = 0; i < grid.length; i++) {
            for(int j = 0; j < grid[0].length; j++) {
                if(grid[i][j] > 0) {
                    dfs(i, j, 0, grid);
                }
            }
        }
        return golds;
    }

    public void dfs(int r, int c, int curr, int[][] grid) {
        if(r < 0 || c < 0 || r >= grid.length || c >= grid[0].length || grid[r][c] == 0) {
            return;
        }
        curr += grid[r][c];
        golds = Math.max(golds, curr);
        int take = grid[r][c];
        grid[r][c] = 0;
        
        dfs(r - 1, c, curr, grid);
        dfs(r, c + 1, curr, grid);
        dfs(r + 1, c, curr, grid);
        dfs(r, c - 1, curr, grid);
        grid[r][c] = take;
    }
}