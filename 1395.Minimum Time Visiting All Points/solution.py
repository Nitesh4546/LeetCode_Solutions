class Solution(object):
    def minTimeToVisitAllPoints(self, points):
        """
        :type points: List[List[int]]
        :rtype: int
        """
        
        time = 0
        for i in range(len(points)-1):
            curr = points[i]
            nxt = points[i+1]

            x = abs(nxt[0]-curr[0])
            y = abs(nxt[1]-curr[1])
            time+= max(x,y)

        return time