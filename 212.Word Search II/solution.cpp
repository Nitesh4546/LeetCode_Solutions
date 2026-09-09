class Solution {
public:
    bool search(int r, int c, int ind, vector<vector<char>>& mat, string &word) {
        if(r < 0 || c < 0 || r >= mat.size() || c >= mat[0].size() || mat[r][c] != word[ind]) {
            return false;
        }
        
        if(ind == word.size() - 1) {
            return true;
        }
        char temp = mat[r][c];
        mat[r][c] = '#';
        
        bool found = search(r + 1, c, ind + 1, mat, word) ||
                     search(r - 1, c, ind + 1, mat, word) || 
                     search(r, c - 1, ind + 1, mat, word) || 
                     search(r, c + 1, ind + 1, mat, word);
        mat[r][c] = temp;
        return found;
    }

    bool exists(int n, int m, vector<vector<char>>& mat, string & word) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(mat[i][j] == word[0]) {
                    if(search(i, j, 0, mat, word)) {
                        return true;
                    }
                }
            } 
        }
        return false;
    }
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        vector<string> res;
        int n = board.size();
        int m = board[0].size();

        vector<int> boardFreq(26, 0);
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                boardFreq[board[i][j] - 'a']++;
            }
        }

        for(string &word : words) {
            // pre exit 
            vector<int> wordFreq(26, 0);
            bool possible = true;
            for(char c : word) {
                wordFreq[c - 'a']++;
                if(wordFreq[c - 'a'] > boardFreq[c - 'a']) {
                    possible = false;
                    break;
                }
            }
            if(!possible) continue;

            // optimization: reversing to avoid unerquired dfs calls when the word is like:
            // aaaaaaab normal use we 7 dfs calls
            // baaaaaaa reversing it only results in 1 single dfs call
            bool reversed = false;
            if(boardFreq[word.back() - 'a'] < boardFreq[word.front() - 'a']) {
                reverse(word.begin(), word.end());
                reversed = true;
            }

            if(exists(n, m, board, word)) {
                if(reversed) {
                    reverse(word.begin(), word.end());
                }
                res.push_back(word);
            }
        }
        return res;
    }
};