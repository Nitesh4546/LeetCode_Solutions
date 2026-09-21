class Solution(object):
    def sum_(self, n):
        sum1 = 0 
        while(n!=0):
            sum1+=n%10
            n//=10
        return sum1
    def countEven(self, num):
        """
        :type num: int
        :rtype: int
        """
        c = 0
        for i in range(1,num+1):
            if(self.sum_(i)%2 == 0):
                c+=1
        return c

        