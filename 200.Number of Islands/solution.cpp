class Solution {
public:
    void bfs(int r, int c, vector<vector<bool>> &vis, vector<vector<char>> &grid){
        vis[r][c] = true;
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int,int>> q;
        q.push({r,c});

        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            for(int tr = -1;tr<=1;tr++){
                for(int tc=-1;tc<=1;tc++){
                    if (abs(tr) + abs(tc) != 1) continue;
                    int ner = row+tr;
                    int nec = col+tc;
                    if(ner>=0 && ner<n && nec>=0 && nec<m &&
                       grid[ner][nec]=='1'&& !vis[ner][nec]){
                        vis[ner][nec] = true;
                        q.push({ner,nec});
                    }
                }
            }
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int island = 0;
        vector<vector<bool>> vis(n,vector<bool>(m,false));

        for(int r = 0;r<n;r++){
            for(int c = 0;c<m;c++){
                if(!vis[r][c]&&grid[r][c]=='1'){
                    bfs(r,c,vis,grid);
                    island++;
                }
            }
        }
        return island;
    }
};