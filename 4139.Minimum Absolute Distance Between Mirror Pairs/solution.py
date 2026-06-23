class Solution(object):
    def rev(self, res):
        num = 0
        while(res>0):
            num = num*10 + res%10
            res//=10
        return num

    def minMirrorPairDistance(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        rec = {}
        min_ = float('inf')
        for idx,val in enumerate(nums):
            
            if val in rec:
                min_ = min(min_, idx-rec[val])
            
            # mirr = self.rev(val)
            mirr = int(str(val)[::-1])
            rec[mirr] = idx
        
        if min_ == float('inf'):
            return -1
        return min_
