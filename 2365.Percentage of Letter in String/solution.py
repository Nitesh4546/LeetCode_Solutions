class Solution(object):
    def percentageLetter(self, s, letter):
        """
        :type s: str
        :type letter: str
        :rtype: int
        """
        # rec = {}
        # for i in s:
            # if i in rec:
                # rec[i]+=1
            # else:
                # rec[i] = 1
        # if(letter not in rec or rec[letter]==0): return 0
        # return (rec[letter]*100//len(s))        
        c = 0 
        for i in s:
            if(i==letter):
                c+=1
        return (c*100)//len(s)