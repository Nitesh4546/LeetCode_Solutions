class Solution(object):
    def findMinimumOperations(self, s1, s2, s3):
        """
        :type s1: str
        :type s2: str
        :type s3: str
        :rtype: int
        """
        min_l = min(len(s1),len(s2),len(s3))
        i=0
        while i<min_l and s1[i]==s2[i] and s2[i]==s3[i]:
          i+=1
        if(i==0):return -1
        tot = len(s1)+len(s2)+len(s3)
        return (tot-(i*3))


        