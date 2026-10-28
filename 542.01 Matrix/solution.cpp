class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        int DR[] = {-1, 1, 0, 0};
        int DC[] = {0, 0, -1, 1};

        queue<pair<int, int>> q;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(mat[i][j] == 0) {
                    q.push({i, j});
                }else {
                    mat[i][j] = -1;
                }
            }
        }

        while(!q.empty()) {
            auto[r, c] = q.front();
            q.pop();
            for(int i = 0; i < 4; i++) {
                int dr = r + DR[i];
                int dc = c + DC[i];
                if(dr >= 0 && dc >= 0 && dr < n && dc < m && mat[dr][dc] == -1) {
                    mat[dr][dc] = mat[r][c] + 1;
                    q.push({dr, dc});
                }
            }
        }
        return mat;
    }
};