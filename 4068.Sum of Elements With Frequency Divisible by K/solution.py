class Solution(object):
    def sumDivisibleByK(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        rec = {}
        res = 0
        for i in nums:
            rec[i] = rec.get(i, 0) + 1
        for i in rec:
            if rec[i]%k==0:
                res = res + i*rec[i]
        return res
        