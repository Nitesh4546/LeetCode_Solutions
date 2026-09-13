class Solution(object):
    def findPermutationDifference(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: int
        """
        
        rec = {char: i for i, char in enumerate(s)}
        sum_ = 0
        for idx, char in enumerate(t):
            sum_ += abs(rec[char] - idx)
            
        return sum_