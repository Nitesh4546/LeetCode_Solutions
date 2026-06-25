class Solution(object):
    def findMaxConsecutiveOnes(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        c = 0
        maxc = 0

        for i in nums:
            if i==1:
                c+=1
                maxc = max(maxc, c)
            else:
                c = 0
        return maxc
        