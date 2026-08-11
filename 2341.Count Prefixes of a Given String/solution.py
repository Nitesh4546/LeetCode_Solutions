class Solution(object):
    def countPrefixes(self, words, s):
        """
        :type words: List[str]
        :type s: str
        :rtype: int
        """
        # s = set(s)
        count = 0
        for i in words:
            if s.startswith(i):
                count += 1
        return count