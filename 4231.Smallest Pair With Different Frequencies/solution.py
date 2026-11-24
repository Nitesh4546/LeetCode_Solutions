class Solution(object):
    def minDistinctFreqPair(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        record = {}
        for i in nums:
            record[i] = record.get(i,0)+1
        a = sorted(record.keys())
        n = len(a)
        for i in range(n):
            temp = a[i]
            for j in range(i+1,n):
                temp1 = a[j]
                if(record[temp]!=record[temp1]):
                    return [temp,temp1]
        return [-1,-1]