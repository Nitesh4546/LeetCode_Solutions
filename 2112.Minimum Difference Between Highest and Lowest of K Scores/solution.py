class Solution(object):
    def minimumDifference(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        if k==1: return 0
        nums.sort()

        # min_diff = -
        min_diff = float('inf')

        for i in range(len(nums)-k+1):
            curr = nums[i+k-1]-nums[i]

            min_diff = min(min_diff, curr)

        return min_diff