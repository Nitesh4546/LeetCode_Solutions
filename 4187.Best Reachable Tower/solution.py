class Solution(object):
    def bestTower(self, towers, center, radius):
        """
        :type towers: List[List[int]]
        :type center: List[int]
        :type radius: int
        :rtype: List[int]
        """
        i, j = center
        q = -1
        res = [-1,-1]

        for x,y,z in towers:
            man = abs(i-x) + abs(j-y)
            if man <= radius:
                if z>q:
                    q = z
                    res = [x,y]
                elif z==q:
                    if x<res[0] or (x==res[0] and y < res[1]):
                        res = [x,y]
        return res