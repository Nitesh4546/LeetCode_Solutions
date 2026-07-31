class Solution(object):
    def findComplement(self, num):
        """
        :type num: int
        :rtype: int
        """
        res = []
        for i in bin(num)[2:]:
          if i=='0':
            res.append('1')
          else:
            res.append('0')
        return int("".join(res),2)
        