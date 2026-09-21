class Solution(object):
    def minOperations(self, grid, x):
        """
        :type grid: List[List[int]]
        :type x: int
        :rtype: int
        """
        temp = []
        for i in grid:
            temp.extend(i)
        
        rem = temp[0] % x
        for i in temp:
            if i % x != rem:
                return -1
        
        temp.sort()
        n = len(temp)
        mid = temp[n // 2]
        
        res = 0
        for i in temp:
            res += abs(i - mid) // x
            
            
        return res
        