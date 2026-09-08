class Solution(object):
    def backspaceCompare(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        ss = []
        for i in range(len(s)):
          if(s[i]=='#'):
            if(len(ss)==0): continue
            ss.pop()
          else:
            ss.append(s[i])
        tt = []
        for i in range(len(t)):
          if(t[i]=='#'):
            if(len(tt)==0): continue
            tt.pop()
          else:
            tt.append(t[i])
        return ("".join(ss)=="".join(tt))