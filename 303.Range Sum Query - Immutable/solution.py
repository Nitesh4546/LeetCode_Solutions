class NumArray(object):

    def __init__(self, nums):
        """
        :type nums: List[int]
        """
        n = len(nums)
        self.nums = nums
        self.pre = [0]*n
        pref = nums[0]
        self.pre[0] = pref
        
        for i in range(1,n):
            pref += nums[i]
            self.pre[i]=pref


    def sumRange(self, left, right):
        """
        :type left: int
        :type right: int
        :rtype: int
        """
        # if left==0:
            # return self.pre[right]
        # return self.pre[right]-self.pre[left-1]
        return sum(self.nums[left:right+1])
        


# Your NumArray object will be instantiated and called as such:
# obj = NumArray(nums)
# param_1 = obj.sumRange(left,right)