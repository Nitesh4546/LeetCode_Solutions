class Solution(object):
    def minAbsoluteDifference(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        one = -1
        two = -1
        n = len(nums)
        # for i in range(n):
        #     if nums[i]==1:
        #         one = i
        #         break
        # for i in range(n):
        #     if nums[i]==2:
        #         two = i
        #         break
        one = -1
        two = -1
        min_ = float('inf')
        for idx,val in enumerate(nums):
            if val==1:
                one = idx
                if two!=-1:
                    min_ = min(min_,abs(one-two))
            elif val==2:
                two = idx
                if one !=-1:
                    min_ = min(min_,abs(one-two))

        return -1 if min_==float('inf') else min_
