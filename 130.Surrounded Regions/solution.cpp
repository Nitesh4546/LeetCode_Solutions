class Solution {
public:
    void dfs(int r, int c, vector<vector<char>> & board, vector<vector<bool>> &vis){
        int n = board.size();
        int m = board[0].size();
        if(r<0 || r>=n || c<0 || c>=m || vis[r][c] || board[r][c] == 'X') return;

        vis[r][c] = true;
        dfs(r+1,c,board,vis);
        dfs(r-1,c,board,vis);
        dfs(r,c+1,board,vis);
        dfs(r,c-1,board,vis);
    }
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<bool>> vis (n,vector<bool> (m,false));

        //rows-0,n-1
        for(int j=0;j<m;j++){
            if(!vis[0][j] && board[0][j]=='O'){
                dfs(0,j,board,vis);
            }
            if(!vis[n-1][j] && board[n-1][j]=='O'){
                dfs(n-1,j,board,vis);
            }
        }
        //col-0,m-1
        for(int j=0;j<n;j++){
            if(!vis[j][0] && board[j][0]=='O'){
                dfs(j,0,board,vis);
            }
            if(!vis[j][m-1] && board[j][m-1]=='O'){
                dfs(j,m-1,board,vis);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if( board[i][j]=='O'&&!vis[i][j]){
                    board[i][j] = 'X';
                }
                }
            }
        }
};