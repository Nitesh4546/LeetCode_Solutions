class Solution(object):
    def maxProduct(self, n):
        """
        :type n: int
        :rtype: int
        """
        # prod = 1
        # for i in str(n):prod*=int(i)
        # return prod
        temp = []
        for i in str(n): temp.append(i)
        temp.sort()
        return int(temp[-1])*int(temp[-2])