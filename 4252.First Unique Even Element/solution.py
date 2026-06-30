class Solution(object):
    def firstUniqueEven(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        rec = {}
        for i in nums:
            if i%2==0:
                rec[i] = rec.get(i,0)+1
        # return sorted(rec.items())[0][0]
        for i in nums:
            if i%2==0 and rec[i]==1:
                return i
        return -1
        
        