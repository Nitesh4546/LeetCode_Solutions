class Solution(object):
    def repeatedCharacter(self, s):
        """
        :type s: str
        :rtype: str
        """
        letters = []
        for i in s:
            if i in letters:
                return i
            letters.append(i)
        