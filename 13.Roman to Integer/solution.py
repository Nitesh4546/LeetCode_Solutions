class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        vals  = {
            'I':1,
            'V':5,
            'X':10,
            'L':50,
            'C':100,
            'D':500,
            'M':1000
        }
        temp = 0
        for i in range(len(s)):
            if i+1<len(s) and vals[s[i]]<vals[s[i+1]]:
                temp -= vals[s[i]]
            else:
                temp += vals[s[i]]
        return temp        