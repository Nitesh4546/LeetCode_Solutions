class Solution(object):
    def checkValid(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: bool
        """
        n = len(matrix)

        num = set(range(1,n+1))
        for i in range(n):
            if set(matrix[i])!=num:
                return False
            col = {matrix[j][i] for j in range(n)}
            if(col!=num):
                return False
        return True