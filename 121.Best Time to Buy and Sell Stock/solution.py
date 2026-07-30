class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        maxprofit = 0
        buy, sell = 0,1
        n = len(prices)

        while sell<n:
            if prices[sell] > prices[buy]:
                profit = prices[sell] - prices[buy]
                if maxprofit < profit:
                    maxprofit = profit
            else:
                buy = sell
            sell += 1
        return maxprofit
        