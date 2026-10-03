class Solution(object):
    def xorAfterQueries(self, nums, queries):
        """
        :type nums: List[int]
        :type queries: List[List[int]]
        :rtype: int
        """
        MOD = 1000000007
        for l, r, k, v in queries:
           
            for idx in range(l, r+1, k):
                nums[idx] = (nums[idx]*v)%(MOD)
        res = 0
        for i in nums:
            res^=i
        return res
        