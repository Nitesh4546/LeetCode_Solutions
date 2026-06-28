class Solution(object):
    def findDisappearedNumbers(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        n = len(nums)
        res = []

        record = {i:0 for i in range(1,n+1)}

        for i in nums:
            record[i] = 1
        
        for i in range(1,n+1):
            if record[i]==0:
                res.append(i)
        
        return res