class Solution {
public:
    vector<int> res;
    void helper(int r, int c, int p_r, int p_c, int n, int m, vector<vector<char>>& grid, vector<vector<bool>>& vis) {
        if(r < 0 || c < 0 || r >= n || c >= m || vis[r][c]) {
            res.push_back(p_r);
            res.push_back(p_c);
            return;
        }

        vis[r][c] = true;
        if(grid[r][c] == 'R') {
            helper(r, c + 1, r, c, n, m, grid, vis);
        }else if(grid[r][c] == 'L') {
            helper(r, c - 1, r, c, n, m, grid, vis);
        }else if(grid[r][c] == 'U') {
            helper(r - 1, c, r, c, n, m, grid, vis);
        }else {
            helper(r + 1, c, r, c, n, m, grid, vis);
        }
    }
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        res.clear();

        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<bool>> vis(n ,vector<bool>(m, false));
        helper(0, 0, 0, 0, n, m, grid, vis);
        return res;
    }
};