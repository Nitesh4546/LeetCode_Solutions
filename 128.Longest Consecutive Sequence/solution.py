class Solution(object):
    def longestConsecutive(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        temp = set(nums)
        count = 0
        res =0
        for x in temp:
            if x-1 not in temp:
                y = x+1
                while y in temp:
                    y+=1
                res = max(res,y-x)
        return res