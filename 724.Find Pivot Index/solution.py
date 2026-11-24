class Solution(object):
    def pivotIndex(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        # total = 0
        # for i in nums:
            # total+=i
        # res = -1
        # for i in range(len(nums)):
        #     if (total-nums[i])%2==0:
        #         res = i
        #         break
        # return res
        n = len(nums)
        suffix = [0]*n
        prefix = [0]*n

        prefix[0] = nums[0]
        for i in range(1,n):
            prefix[i] = prefix[i-1]+nums[i]
        
        suffix[-1] = nums[-1]
        for i in range(n-2,-1,-1):
            suffix[i] = suffix[i+1] + nums[i]
        
        res = -1
        for i in range(n):
            if suffix[i]==prefix[i]:
                res = i
                break
        return res