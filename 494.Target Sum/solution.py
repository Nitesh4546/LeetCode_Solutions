class Solution(object):
    def findTargetSumWays(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        dp = {}
        def back(index,total):
            if index == len(nums):
                if total==target:
                    return 1
                return 0
            
            if (index,total) in dp:
                return dp[(index,total)]
            
            dp[(index, total)] = back(index+1,total+nums[index])+back(index+1,total-nums[index])
            return dp[(index,total)]
        return back(0,0)