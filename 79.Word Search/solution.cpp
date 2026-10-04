class Solution {
public:
    bool dfs(int r, int c, int i, vector<vector<char>> &board, string word){
        int len = word.size();
        int n = board.size();
        int m = board[0].size();

        if(i==len) return true;
        if(r<0 || r>=n || c<0 || c>=m || word[i]!=board[r][c]) return false;

        char temp = board[r][c];
        board[r][c] = '#';
        bool found = (
                    dfs(r+1,c,i+1,board,word) ||
                    dfs(r-1,c,i+1,board,word) ||
                    dfs(r,c+1,i+1,board,word) ||
                    dfs(r,c-1,i+1,board,word)
                        );
        board[r][c] = temp;
        return found;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0]){
                    if(dfs(i,j,0,board,word)) return true;
                }
            }
        }
        return false;
    }
};