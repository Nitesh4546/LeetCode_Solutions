class Solution(object):
    def countDigitOccurrences(self, nums, digit):
        """
        :type nums: List[int]
        :type digit: int
        :rtype: int
        """
        nums = list(map(str,nums))
        c = 0
        digit = str(digit)
        for i in nums:
            for j in i:
                if j==digit:
                    c+=1
        return c