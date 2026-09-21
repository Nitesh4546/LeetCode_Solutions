class Solution(object):
    def validDigit(self, n, x):
        """
        :type n: int
        :type x: int
        :rtype: bool
        """
        n,x = str(n), str(x)
        if n[0]==x[0]: return False

        rec = {}
        for i in n: rec[i] = rec.get(i,0)+1

        if rec.get(x,0)==0: return False
        return True