class Solution(object):
    def maxDigitRange(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        ranges = []
        for i in nums:
            digi = str(i)
            a = int(max(digi))
            b = int(min(digi))
            ranges.append(a - b)

        curr = max(ranges)

        output = 0
        for i, j in enumerate(ranges):
            if(j == curr):
                output += nums[i]
        return output