class Solution(object):
    def reverseVowels(self, s):
        """
        :type s: str
        :rtype: str
        """
        vow = set("aeiouAEIOU")

        chars = list(s)

        l,r = 0, len(chars)-1

        while l<r:
            while l<r and chars[l] not in vow:
                l+=1
            
            while l<r and chars[r] not in vow:
                r-=1
            chars[l], chars[r] = chars[r],chars[l]
            l+=1
            r-=1
        return "".join(chars)
        