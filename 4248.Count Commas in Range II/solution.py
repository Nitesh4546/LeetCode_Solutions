class Solution(object):
    def countCommas(self, n):
        """
        :type n: int
        :rtype: int
        """
        count = 0
        cont = 1000
        while(n>=cont):
            
            count+=(n-cont+1)
            cont*=1000
        return count