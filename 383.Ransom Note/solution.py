class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        """
        :type ransomNote: str
        :type magazine: str
        :rtype: bool
        """
        rec_m = {}
        for i in magazine: rec_m[i] = rec_m.get(i,0)+1
        
        for i in ransomNote:
            if i in rec_m and rec_m[i] > 0: rec_m[i]-=1
            else: return False
        return True
