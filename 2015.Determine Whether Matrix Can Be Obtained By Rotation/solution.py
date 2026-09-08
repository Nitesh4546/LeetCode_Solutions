class Solution(object):
    def findRotation(self, mat, target):
        """
        :type mat: List[List[int]]
        :type target: List[List[int]]
        :rtype: bool
        """
        n = len(mat)
        for i in range(4):
            if mat == target:
                return True
            for j in range(n):
                for k in range(j+1,n):
                    mat[j][k],mat[k][j] = mat[k][j],mat[j][k]
            for j in range(n):
                mat[j].reverse()
        return False