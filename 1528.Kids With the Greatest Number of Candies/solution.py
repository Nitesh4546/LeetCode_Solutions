class Solution(object):
    def kidsWithCandies(self, candies, extraCandies):
        """
        :type candies: List[int]
        :type extraCandies: int
        :rtype: List[bool]
        """
        max_ = max(candies)
        n = len(candies)
        res = [True]*n
        for i in range(n):
            if (candies[i]+extraCandies)<max_:
                res[i] = False
        return res