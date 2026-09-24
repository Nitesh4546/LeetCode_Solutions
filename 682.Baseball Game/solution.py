class Solution(object):
    def calPoints(self, operations):
        """
        :type operations: List[str]
        :rtype: int
        """
        temp = []
        
        for op in operations:
            if op == '+':
                temp.append(temp[-1] + temp[-2])
            elif op == 'D':
                temp.append(temp[-1] * 2)
            elif op == 'C':
                temp.pop()
            else:
                temp.append(int(op))
                
        return sum(temp)