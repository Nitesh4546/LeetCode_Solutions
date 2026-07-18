class Solution(object):
    def isMonotonic(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        # inc = True
        # desc = True
        # for i in range(len(nums)-1):
        #     if(nums[i]>nums[i+1]):
        #         inc = False
        #     elif(nums[i]<nums[i+1]):
        #         desc = False
        # return inc or desc
        if(nums==sorted(nums) or nums==sorted(nums,reverse=True)): return True
        return False