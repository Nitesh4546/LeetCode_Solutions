class Solution {
public:
    int glass(int r, int c, vector<vector<int>>& grid) {
        if(r + 2 >= grid.size() || c + 2 >= grid[0].size()) {
            return 0;
        }

        int sum_ = 0;
        // top
        sum_ += grid[r][c] + grid[r][c + 1] + grid[r][c + 2];

        // middle
        sum_ += grid[r + 1][c + 1];

        // bottom
        sum_ += grid[r + 2][c] + grid[r + 2][c + 1] + grid[r + 2][c + 2];
        return sum_;
    }
    int maxSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        int curr = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                int temp = glass(i, j, grid);
                curr = max(curr, temp);
            }
        }
        return curr;
        
    }
};