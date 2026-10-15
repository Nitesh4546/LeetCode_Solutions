class Solution(object):
    def decodeString(self, s):
        """
        :type s: str
        :rtype: str
        """
        res = []

        for i in s:
            if i==']':
                
               
                string = []
                while res and res[-1]!='[':
                    string.append(res.pop())
                string = ''.join(string[::-1])

                
                res.pop()

               
                nums = []
                while res and res[-1].isdigit():
                    nums.append(res.pop())
                nums = int(''.join(nums[::-1]))

                
                res.append(string*nums)
            else:
                res.append(i)
        return ''.join(res)
