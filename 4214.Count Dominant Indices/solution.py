#ENJOY THE QUESTION GOVIND
class Solution(object):
    def dominantIndices(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)
        if n <= 1:return 0
            
        count = 0
        sum_ = 0
        
        for i in range(n - 1, -1, -1):
            temp = (n - 1) - i
            
            if temp > 0:
                avg = sum_/temp
                if nums[i] > avg:
                    count += 1
            sum_ += nums[i]
        return count