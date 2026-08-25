class Solution(object):
    def maximumLengthSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        res = 0
        n = len(s)
        for i in range(n):
            rec = {}
            for j in range(i, n):
                char = s[j]

                if char not in rec:
                    rec[char] = 0
                rec[char] += 1

                if rec[char] > 2:
                    break
                
                res = max(res, j - i + 1)
        return res