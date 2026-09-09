class Solution(object):
    def leftRightDifference(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        n = len(nums)
        res = [0]*n
        for i in range(1,n):
            res[i] = res[i-1]+nums[i-1]
        resr = [0]*n
        for i in range(n-2,-1,-1):
            resr[i] = resr[i+1]+nums[i+1]
        for i in range(n):
            res[i] = abs(res[i]-resr[i])
        # print(res)
        return res