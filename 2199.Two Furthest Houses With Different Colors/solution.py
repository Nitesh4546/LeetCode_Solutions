class Solution(object):
    def maxDistance(self, colors):
        """
        :type colors: List[int]
        :rtype: int
        """
        n = len(colors)
        i = 0
        j = n-1
        res = 0
        while(j>0):
            if colors[0]!=colors[j]:
                res = max(res,j)
            j-=1
        
        while(i<n):
            if colors[-1]!=colors[i]:
                res = max(res,(n-i-1))
            i+=1
        return res
            

        