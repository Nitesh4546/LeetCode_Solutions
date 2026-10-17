class Solution(object):
    def isGood(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        n = len(nums) - 1
        if n <= 0: 
            return False        
        exp = list(range(1, n)) + [n, n]
        return sorted(nums) == exp