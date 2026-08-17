#Enjoy the question Govind
class Solution(object):
    def isAcronym(self, words, s):
        """
        :type words: List[str]
        :type s: str
        :rtype: bool
        """
        res = []
        for i in words:
            res.append(i[0])
        return s=="".join(res)