class Solution {
public:
    void helper(vector<vector<int>>& grid, int sr, int sc) {
        if(sr < 0 || sc < 0 || sr >= grid.size() || sc >= grid[0].size() || grid[sr][sc] == 1) {
            return;
        }
        grid[sr][sc] = 1;
        helper(grid, sr + 1, sc);
        helper(grid, sr - 1, sc);
        helper(grid, sr, sc + 1);
        helper(grid, sr, sc - 1);
    }
    int closedIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        // l r
        for(int i = 0; i < n; i++) {
            if(grid[i][0] == 0) helper(grid, i, 0);
            if(grid[i][m - 1] == 0) helper(grid, i, m - 1);
        }

        // t b
        for(int i = 0; i < m; i++) {
            if(grid[0][i] == 0) helper(grid, 0, i);
            if(grid[n - 1][i] == 0) helper(grid, n - 1, i);
        }

        int count = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 0) {
                    helper(grid, i, j);
                    count++;
                }
            }
        }
        return count;
    }
};