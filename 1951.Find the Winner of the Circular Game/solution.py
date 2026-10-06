class Solution(object):
    def findTheWinner(self, n, k):
        """
        :type n: int
        :type k: int
        :rtype: int
        """
        l = [i for i in range(1,n+1)]
        j = k-1
        while(len(l)!=1):
            l.pop(j)
            j = (j+k-1)%len(l)
                
        return l[-1]