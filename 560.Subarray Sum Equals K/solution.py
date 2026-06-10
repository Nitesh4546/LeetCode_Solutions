class Solution(object):
    def subarraySum(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        n = len(nums)
        # temp = [0]*(n+1)
        # for i in range(n):
        #     temp[i+1] = temp[i]+nums[i]
        
        # c = 0
        
        # for i in range(n):
        #     for j in range(i+1,n+1):
        #         if temp[j]-temp[i]==k:
        #             c+=1
        # return c
        temp = {0:1}
        curr = 0
        c = 0
        for i in nums:
            curr+=i

            tar = curr-k
            if tar in temp:
                c += temp[tar]
            temp[curr] = temp.get(curr,0)+1
        return c