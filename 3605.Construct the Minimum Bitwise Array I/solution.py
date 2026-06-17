class Solution(object):
    
    def minBitwiseArray(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        res = [-1]*(len(nums))
        limit = max(nums)

        for i in range(len(nums)):
           for j in range(limit):
            if (j|(j+1)==nums[i]):
                res[i] = j
                # f = True
                break
            # if not f:
                # res.append(-1)
                # f = False
            # else:
                # res.append(-1)
        return res