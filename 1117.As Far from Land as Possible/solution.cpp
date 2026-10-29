class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        queue<pair<int, int>> q;
        vector<vector<int>> vis = grid;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    q.push({i, j});
                }
            }
        }
        
        if (q.empty() || q.size() == n * m) {
            return -1;
        }
        
        int dR[] = {0, 0, -1, 1};
        int dC[] = {-1, 1, 0, 0};
        
        int res = -1;
        
        while (!q.empty()) {
            int sz = q.size();
            while (sz--) {
                auto [r, c] = q.front();
                q.pop();
                
                for (int i = 0; i < 4; i++) {
                    int dr = r + dR[i];
                    int dc = c + dC[i];
                    
                    if (dr >= 0 && dc >= 0 && dr < n && dc < m && vis[dr][dc] == 0) {
                        vis[dr][dc] = 1;
                        q.push({dr, dc});
                    }
                }
            }
            res++;
        }
        return res;
    }
};
