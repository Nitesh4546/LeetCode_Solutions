class Solution(object):
    def removeTrailingZeros(self, num):
        """
        :type num: str
        :rtype: str
        """
        # return str(int(num[::-1]))[::-1]
        return num.rstrip('0')    
