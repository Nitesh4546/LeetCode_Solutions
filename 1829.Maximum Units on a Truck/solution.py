class Solution(object):
    def maximumUnits(self, boxTypes, truckSize):
        """
        :type boxTypes: List[List[int]]
        :type truckSize: int
        :rtype: int
        """
        boxTypes.sort(key = lambda x:x[1], reverse=True)
        # print(boxTypes)
        # need = 0
        units = 0
        for i, j in boxTypes:
            if truckSize<0:return units
            to = min(i,truckSize)
            units += to*j
            truckSize-=to
        return units