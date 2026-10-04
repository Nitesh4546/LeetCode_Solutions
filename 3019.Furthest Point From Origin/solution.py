class Solution(object):
    def furthestDistanceFromOrigin(self, moves):
        """
        :type moves: str
        :rtype: int
        """
        rec = {}
        for i in moves:
            rec[i] = rec.get(i,0)+1
        return abs(rec.get('L',0)-rec.get('R',0)) + rec.get('_',0)
        