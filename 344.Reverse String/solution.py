class Solution(object):
    def recursion(self, s, i, j):
        if(i>=j): return
        s[j],s[i] = s[i],s[j]
        self.recursion(s,i+1,j-1)
        
    def reverseString(self, s):
        """
        :type s: List[str]
        :rtype: None Do not return anything, modify s in-place instead.
        """
        i = 0
        j = len(s)-1
        self.recursion(s,i,j)
        