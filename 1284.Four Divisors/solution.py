class Solution(object):
    def sumFourDivisors(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        total = 0
        for n in nums:
            divisor = set()
            for i in range(1,int(math.sqrt(n))+1):
                if n%i==0:
                    divisor.add(i)
                    divisor.add(n//i)
                
                if len(divisor)>4:
                    break
            if len(divisor)==4:
                for i in divisor:
                    total+=i
        return total