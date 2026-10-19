class Solution(object):
    def decimalRepresentation(self, num):
        """
        :type n: int
        :rtype: List[int]
        """
        num = str(num)
        n = len(num)
        res = []
        multi = 10**(n-1)
        for i in num:
          temp = int(i)*10**(n-1)
          if(temp!=0):
            res.append(temp)
          n-=1
        return res
        