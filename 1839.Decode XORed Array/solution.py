class Solution(object):
    def decode(self, encoded, first):
        """
        :type encoded: List[int]
        :type first: int
        :rtype: List[int]
        """
        arr = [first]

        for i in encoded: arr.append(arr[-1]^i)
        return arr
        