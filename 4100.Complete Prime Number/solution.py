class Solution(object):
    def isprime(self, n):
        if n <= 1:  
            return False
        i = 2
        while (i * i <= n):
            if (n % i == 0): 
                return False
            i += 1
        return True

    
    def completePrime(self, num):
        """
        :type num: int
        :rtype: bool
        """
        # print(self.isprime(2))
        temp = 0
        for i in str(num):
            temp = temp*10 + int(i)
            if(not self.isprime(temp)): return False
        
        temp = 0
        for i in str(num)[::-1]:
            temp = temp*10 + int(i)
            tempe = int(str(temp)[::-1])
            if(not self.isprime(tempe)): return False
        return True