class Solution(object):
    def findMissingElements(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        start = min(nums)
        end = max(nums)
        nums = set(nums)
        # res = []
        # for i in range(start,end+1):
        #     if i not in nums:
        #         res.append(i)
        # return res
        return [i for i in range(start,end+1) if i not in nums]
        