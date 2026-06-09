class Solution(object):
    def kWeakestRows(self, mat, k):
        """
        :type mat: List[List[int]]
        :type k: int
        :rtype: List[int]
        """
        rec = {}
        n = len(mat)
        for i in range(n): rec[i] = sum(mat[i])
        # print(rec)
        temp = sorted(rec.items(),key = lambda x:x[1])
        # print(temp)
        return [r[0] for r in temp[:k]]