#Enjoy the question Govind
class Solution(object):
    def maximumGap(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        # nums.sort()
        nums = sorted(set(nums))
        n = len(nums)
        max_ = 0
        for i in range(1,n):
            gap = nums[i]-nums[i-1]
            if gap>max_:
                max_ = gap
        return max_