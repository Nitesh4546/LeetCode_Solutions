class Solution(object):
    def isMiddleElementUnique(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        rec = {}
        for i in nums:
            rec[i] = rec.get(i, 0) + 1
        return rec[nums[len(nums) // 2 ]] == 1