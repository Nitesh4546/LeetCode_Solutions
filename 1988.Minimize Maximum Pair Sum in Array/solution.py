class Solution(object):
    def minPairSum(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums.sort()

        l = 0
        r = len(nums)-1
        max_p = 0
        while(l<r):
            curr = nums[l]+nums[r]
            if(curr>max_p):
                max_p = curr
            
            l+=1
            r-=1
        return max_p