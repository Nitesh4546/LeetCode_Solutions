class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();

        int total = m * n;
        k %= total;

        vector<vector<int>> res(n, vector<int>(m, 0));

        for(int i = 0; i< n; i++) {
            for(int j = 0; j < m; j++) {
                int ol  = i * m + j;
                int ne = (ol + k) % total;
                int r = ne / m;
                int c = ne % m;
                res[r][c] = grid[i][j];
            }
        }
        return res;
    }
};