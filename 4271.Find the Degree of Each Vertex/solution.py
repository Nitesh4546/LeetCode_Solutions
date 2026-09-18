class Solution(object):
    def findDegrees(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: List[int]
        """
        n = len(matrix)
        res = [0]*n
        for i in range(n):
            c = 0
            for j in range(n):
                if matrix[i][j]==1:
                    c+=1
            res[i]=c
        return res