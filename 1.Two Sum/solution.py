class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        maped = {}
        for ind,val in enumerate(nums):
            diff = target - val
            if diff in maped:
                return [maped[diff],ind]
            else:
                maped[val] = ind
        return []
        