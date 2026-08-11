class Solution(object):
    def hammingWeight(self, n):
        """
        :type n: int
        :rtype: int
        """
        c = 0
        for i in bin(n)[2:]:
            if i=="1":
                c+=1
        return c