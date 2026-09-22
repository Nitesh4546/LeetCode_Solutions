class Solution(object):
    def reversePrefix(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: str
        """
        prefix = s[:k][::-1]
        suffix = s[k:]
        return prefix+suffix