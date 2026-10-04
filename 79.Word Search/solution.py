class Solution(object):
    def dfs(self, r, c, index, word, board):
        if index==len(word):
            return True
        
        if r<0 or r>=len(board) or \
           c<0 or c>=len(board[0]) or \
           board[r][c] != word[index]:
            return False
        
        temp = board[r][c]
        board[r][c] = "#"
        found = self.dfs(r+1,c,index+1,word,board) or \
                self.dfs(r-1,c,index+1,word,board) or \
                self.dfs(r,c+1,index+1,word,board) or \
                self.dfs(r,c-1,index+1,word,board)
        board[r][c] = temp

        return found

    def exist(self, board, word):
        """
        :type board: List[List[str]]
        :type word: str
        :rtype: bool
        """
        for r in range(len(board)):
            for c in range(len(board[0])):
                if board[r][c] == word[0]:
                    if self.dfs(r,c,0,word,board):
                        return True
        return False

        