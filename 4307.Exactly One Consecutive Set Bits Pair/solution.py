class Solution(object):
    def consecutiveSetBits(self, n):
        """
        :type n: int
        :rtype: bool
        """
        bits = bin(n)[2:]
        c = 0
        for i in range(1, len(bits)):
            if bits[i - 1] == '1' and bits[i] == '1':
                c += 1
        # return False
        return c==1
