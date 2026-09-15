#Thanks
class Solution(object):
    def matrixSum(self, nums):
        """
        :type nums: List[List[int]]
        :rtype: int
        """
        for i in nums:
            i.sort()
        sum_ = 0
        while(len(nums[0])!=0):
            temp = []
            for i in nums:
                temp.append(i.pop())
            sum_+=max(temp)
        return sum_