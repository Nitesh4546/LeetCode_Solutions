class Solution(object):
    def distance(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        # rec = {}
        # for ind,val in enumerate(nums):
        #     if val not in rec:
        #         rec[val] = []
        #     rec[val].append(ind)
        # # res = []
        # print(rec)
        # return []
        n = len(nums)
        res = [0] * n
        
        rec = {}
        rec_ = {}
        
        for ind, val in enumerate(nums):
            if val in rec:
                res[ind] += (rec[val] * ind) - rec_[val]
                rec[val] += 1
                rec_[val] += ind
            else:
                rec[val] = 1
                rec_[val] = ind
        
        rec.clear()
        rec_.clear()
        
        for i in range(n - 1, -1, -1):
            val = nums[i]
            if val in rec:
                res[i] += rec_[val] - (rec[val] * i)
                rec[val] += 1
                rec_[val] += i
            else:
                rec[val] = 1
                rec_[val] = i
                
        return res