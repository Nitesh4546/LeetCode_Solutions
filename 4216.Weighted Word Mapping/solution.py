class Solution(object):
    def mapWordWeights(self, words, weights):
        """
        :type words: List[str]
        :type weights: List[int]
        :rtype: str
        """
        res = []
        for wr in words:
            weg = sum(weights[ord(c)-ord('a')] for c in wr)
            mpval = weg % 26
            tar = chr(ord('z')-mpval)
            res.append(tar)
        return "".join(res)            
        
        