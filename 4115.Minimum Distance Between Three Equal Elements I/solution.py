class Solution(object):
    def minimumDistance(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        rec = {i:[] for i in set(nums)}
        for i,j in enumerate(nums):
            rec[j].append(i)
        print(rec)
        min_ = float('inf')
        
        for val in rec:
            indx = rec[val]
            if len(indx) >= 3:
                for i in range(len(indx) - 2):
                    dist = 2 * (indx[i+2] - indx[i])
                    if dist < min_:
                        min_ = dist
                        
        return min_ if min_ != float('inf') else -1
        