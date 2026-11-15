class Solution(object):
    def minOperations(self, logs):
        """
        :type logs: List[str]
        :rtype: int
        """
        depth = 0
        
        for l in logs:
            if l == "../":
                if depth > 0:
                    depth -= 1
            elif l == "./":
                continue
            else:
                depth += 1
                
        return depth
        