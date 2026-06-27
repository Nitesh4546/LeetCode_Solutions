class Solution(object):
    def construct2DArray(self, original, n, m):
        """
        :type original: List[int]
        :type m: int
        :type n: int
        :rtype: List[List[int]]
        """
        res = [[0 for j in range(m)] for i in range(n)]
        if(len(original)>n*m or n*m>len(original)):
            return []
        counter = 0
        for i in range(n):
            for j in range(m):
                res[i][j] = original[counter]
                counter+=1

        return res
        