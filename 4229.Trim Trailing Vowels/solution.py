class Solution(object):
    def trimTrailingVowels(self, s):
        """
        :type s: str
        :rtype: str
        """
        # n = len(s)
        # h = n-1
        vow = {'a','e','i','o','u'}
        while(s[len(s)-1] in vow):
            s = s[:len(s)-1]
            if(s==""):
                return ""
        return s
        # while(h>=0 and s[h] in vow):
            # h-=1
        # return s[:h+1]