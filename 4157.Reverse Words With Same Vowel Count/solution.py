class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        s = list(s.split())
        ref = s[0]
        vow = {_ for _ in "aeiou"}

        c = 0
        for i in ref:
            if i in vow:
                c+=1
        n = len(s)
        for i in range(1,n):
            temp = s[i]
            t = 0
            for k in temp:
                if k in vow:
                    t+=1
            if t==c:
                s[i] = s[i][::-1]
        return " ".join(s)