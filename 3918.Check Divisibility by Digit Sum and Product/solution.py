class Solution(object):
    def checkDivisibility(self, n):
        """
        :type n: int
        :rtype: bool
        """
        org = n
        n1 = n
        sum_ = 0
        pro_ = 1
        while(n!=0):
            sum_+=n%10
            n//=10
        
        while(n1!=0):
            pro_*=n1%10
            n1//=10
        # return True if() else False
        return org%(sum_+pro_)==0