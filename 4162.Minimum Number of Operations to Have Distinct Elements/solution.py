class Solution(object):
    def minOperations(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        seen = set()
        for i in range(len(nums)-1,-1,-1):
            if nums[i] in seen:
                return int(math.ceil((i+1)/3.0))
            seen.add(nums[i])
        return 0