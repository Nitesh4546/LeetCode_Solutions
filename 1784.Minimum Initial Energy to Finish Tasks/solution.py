class Solution(object):
    def helper(self, mid, tasks):
        curr = mid
        for act, min_ in tasks:
            if curr < min_:
                return False
            curr -= act
        return True

    def minimumEffort(self, tasks):
        tasks.sort(key=lambda x: x[1] - x[0], reverse=True)
  
        l = 0
        r = 0
        for act, min_ in tasks:
            l+=act
            r+=min_
        res = r
        
        while l <= r:
            mid = (l + r) // 2
            if self.helper(mid, tasks):
                res = mid
                r = mid - 1 
            else:
                l = mid + 1 
        return res