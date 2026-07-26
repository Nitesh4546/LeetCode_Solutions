class Solution(object):
    def first(self,a,target):
        l = 0
        r = len(a)-1
        fir = -1

        while(l<=r):
            mid = l + (r-l)//2
            if(a[mid]==target):
                fir = mid
                r = mid - 1
            elif(a[mid]>target):
                r = mid - 1
            else:
                l = mid + 1
        return fir
    def last(self,a,target):
        l = 0
        r = len(a)-1
        las = -1

        while(l<=r):
            mid = l + (r-l)//2
            if(a[mid]==target):
                las = mid
                l = mid + 1
            elif(a[mid]>target):
                r = mid - 1
            else:
                l = mid + 1
        return las

    def searchRange(self, a, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        if not a: return [-1,-1]
        fir = self.first(a,target)
        if(fir==-1): return [-1,-1]
        # las = self
        return [fir,self.last(a,target)]