class Solution(object):
    def helper(self, nums, k, dist):
        l = 0
        count = 0
        for r in range(len(nums)):
            while nums[r]-nums[l]>dist:
                l+=1
            count +=r-l
        return count
    
    def smallestDistancePair(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        nums.sort()
        left = 0
        right = nums[-1] - nums[0]
        while left < right:
            mid = left+(right-left)//2

            if self.helper(nums,k,mid)>=k:
                right = mid
            else:
                left = mid + 1
        return right

        