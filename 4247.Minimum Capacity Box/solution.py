class Solution(object):
    def minimumIndex(self, capacity, itemSize):
        """
        :type capacity: List[int]
        :type itemSize: int
        :rtype: int
        """
        # cap = float('inf')
        cap = max(capacity)+1
        ind = -1
        for i in range(len(capacity)):
            if capacity[i]>=itemSize:
                if capacity[i]< cap:
                    ind = i
                    cap = capacity[i]
        return ind
        