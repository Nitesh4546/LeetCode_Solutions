class Solution {
public:
    int count = 0;
    void helper(int r, int n, set<int>& col, set<int>& pdiag, set<int>& ndiag, vector<vector<char>>& board) {
        if(r == n) {
            count++;
            return;
        }

        for(int c = 0; c < n; c++) {
            if(col.find(c) != col.end() || pdiag.find(r + c) != pdiag.end() || ndiag.find(r - c) != ndiag.end()) {
                continue;
            }
            col.insert(c);
            pdiag.insert(r + c);
            ndiag.insert(r - c);
            board[r][c] = 'Q';
            
            helper(r + 1, n, col, pdiag, ndiag, board);
            
            col.erase(c);
            pdiag.erase(r + c);
            ndiag.erase(r - c);
            board[r][c] = '.';
        }
    }
    int totalNQueens(int n) {
        count = 0;
        set<int> col;
        set<int> pdiag;
        set<int> ndiag;
        vector<vector<char>> board(n, vector<char>(n, '.'));
        helper(0, n, col, pdiag, ndiag, board);
        return count;
    }
};