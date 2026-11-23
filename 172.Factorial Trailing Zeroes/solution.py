class Solution(object):
    def trailingZeroes(self, n):
        """
        :type n: int
        :rtype: int
        """
        num = 1
        for i in range(1,n+1):
            num*=i
        num = str(num)
        i = len(num)-1
        c = 0
        while(num[i] =="0"):
            c+=1
            i-=1
        return c
        # num = 0
        # while n>=5:
        #     n//=5
        #     num+=n
        # return num