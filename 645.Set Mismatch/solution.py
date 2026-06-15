class Solution(object):
    def findErrorNums(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        n = len(nums)

        counts = [0]*(n+1)
        for num in nums:
            counts[num]+=1
        
        dup = -1
        mis = -1

        for i in range(1,n+1):
            if counts[i] ==2:
                dup = i
            elif counts[i] == 0:
                miss = i
        return [dup, miss]
        