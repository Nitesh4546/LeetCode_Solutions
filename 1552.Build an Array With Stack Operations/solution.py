class Solution(object):
    def buildArray(self, target, n):
        """
        :type target: List[int]
        :type n: int
        :rtype: List[str]
        """
        tar = set(target)
        # temp = [i for i in range(1,n+1)]
        res = []
        limit = target[-1]
        for i in range(1,limit+1):
            res.append("Push")
            if i not in tar:
            # else:
                # res.append("Push")
                res.append("Pop")
        return res