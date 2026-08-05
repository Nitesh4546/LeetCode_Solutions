class Solution(object):
    def findDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        record = set()
        for i in nums:
            if i in record:
                return i
            record.add(i)
        
        