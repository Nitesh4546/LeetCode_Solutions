class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        if(len(s) != len(t)):
            return False

        temp = {}
        for i in range(len(s)):
            temp[s[i]] = temp.get(s[i],0) +1
            temp[t[i]] = temp.get(t[i],0) -1

        for i in temp.values():
            if i!=0:
                return False
        return True
            

    