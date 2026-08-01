class Solution(object):
    def numWaterBottles(self, numBottles, numExchange):
        """
        :type numBottles: int
        :type numExchange: int
        :rtype: int
        """
        c = numBottles
        empt = numBottles
        while(empt>=numExchange):
            new = empt//numExchange
            c+=new
            empt = empt%numExchange+new

        return c