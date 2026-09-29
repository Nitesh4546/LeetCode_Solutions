class Solution(object):
    def smallerNumbersThanCurrent(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        res = []
        record = {}

        for ind, val in enumerate(sorted(nums)):
            if val not in record:
                record[val] = ind
        
        for i in nums:
            res.append(record[i])
        return res
        