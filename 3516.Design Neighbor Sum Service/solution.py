class NeighborSum(object):

    def __init__(self, grid):
        """
        :type grid: List[List[int]]
        """
        self.grid = grid
        self.n = len(grid)
        self.m = len(grid[0])
        

    def adjacentSum(self, value):
        """
        :type value: int
        :rtype: int
        """
        sum_ = 0
        r,c = self.search(value)
        
        if r-1>=0:
            sum_+=self.grid[r-1][c]
        
        if  c-1>=0:
            sum_+=self.grid[r][c-1]
        
        if r+1<self.n:
            sum_+=self.grid[r+1][c]
        
        if c+1<self.m:
            sum_+=self.grid[r][c+1]

        return sum_
        

    def diagonalSum(self, value):
        """
        :type value: int
        :rtype: int
        """
        r,c = self.search(value)
        sum_ = 0
        if r-1>=0 and c-1>=0:
            sum_+=self.grid[r-1][c-1]
        
        if r-1>=0 and c+1<self.m:
            sum_+=self.grid[r-1][c+1]
        
        if r+1<self.n and c-1>=0:
            sum_+=self.grid[r+1][c-1]
        
        if r+1<self.n and c+1<self.m:
            sum_+=self.grid[r+1][c+1]
        
        return sum_

    def search(self, value):
        """
        :type value: int
        :rtype: list
        """
        for i in range(self.n):
            for j in range(self.m):
                if self.grid[i][j]==value:
                    return [i,j]
        return [-1,-1]


# Your NeighborSum object will be instantiated and called as such:
# obj = NeighborSum(grid)
# param_1 = obj.adjacentSum(value)
# param_2 = obj.diagonalSum(value)