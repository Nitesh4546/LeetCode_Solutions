class Solution(object):
    def largestEven(self, s):
        """
        :type s: str
        :rtype: str
        """
        l = len(s)-1
        while(l>=0):
            if int(s[l])%2==0:
                return s[:l+1]
            l-=1
        return ""