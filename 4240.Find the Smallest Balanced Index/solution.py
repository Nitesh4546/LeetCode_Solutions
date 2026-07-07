class Solution(object):
    def smallestBalancedIndex(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        
        # suff = [1]*len(nums)   
        # for i in range(len(nums)-2,-1,-1):
        #     suff[i] = suff[i+1]*nums[i+1]     

        # l = 0
        # for i in range(len(nums)):
        #     if l==suff[i]:
        #         return i
        #     l+=nums[i]
        left = sum(nums)
        right = 1
        n = len(nums)
        for i in range(n-1,-1,-1):
            left -= nums[i]
            if left == right:
                return i
            if left<right:
                break
            right *= nums[i]
        return -1

        