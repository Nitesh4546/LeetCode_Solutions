class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        strs.sort(key=len)
        prefix = strs[0]
        n = len(prefix)

        while True:
            mismatch = False

            for i in strs:
                if prefix != i[:n]:
                    mismatch = True
                    break
            
            if mismatch:
                n -= 1
                if n==0:
                    return ""
                prefix = prefix[:n]
            else:
                return prefix
        