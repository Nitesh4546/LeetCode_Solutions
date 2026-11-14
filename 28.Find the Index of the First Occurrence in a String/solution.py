class Solution(object):
    def strStr(self, haystack, needle):
        """
        :type haystack: str
        :type needle: str
        :rtype: int
        """
        l = 0
        r = len(needle)-1

        while(r<len(haystack)):
            if haystack[l:r+1] == needle:
                return l
            l+=1
            r+=1
        return -1
        