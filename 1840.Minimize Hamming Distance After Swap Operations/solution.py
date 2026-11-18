class Solution(object):
    def helper(self, k, pst):
        if pst[k]==k:
            return k
        pst[k] = self.helper(pst[k],pst)
        return pst[k]
    def minimumHammingDistance(self, source, target, allowedSwaps):
        """
        :type source: List[int]
        :type target: List[int]
        :type allowedSwaps: List[List[int]]
        :rtype: int
        """
        n = len(source)
        pst = list(range(n))

        for i, j in allowedSwaps:
            root, root_ = self.helper(i,pst), self.helper(j,pst)
            if root != root_:
                pst[root] = root_
        
        comp = {}
        for i in range(n):
            root = self.helper(i, pst)
            if root not in comp:
                comp[root] = []
            comp[root].append(i)
        
        res = 0
        for r in comp:
            ind = comp[r]
            src = Counter(source[i] for i in ind)
            for j in ind:
                if src[target[j]]>0:
                    res+=1
                    src[target[j]]-=1
        
        return n-res