class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        record = dict()
        for i in nums:
            if i in record:
                record[i] +=1
            else:
                record[i] = 1

        for i,j in record.items():
            if j==1:
                return i
        
        