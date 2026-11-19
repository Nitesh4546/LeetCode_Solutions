class Solution(object):
    def compareVersion(self, version1, version2):
        """
        :type version1: str
        :type version2: str
        :rtype: int
        """
        ver1 = list(map(int, version1.split('.')))
        ver2 = list(map(int, version2.split('.')))

        while(len(ver1) < len(ver2)):
            ver1.append(0)
        
        while(len(ver2) < len(ver1)):
            ver2.append(0)
        
        for a, b in zip(ver1, ver2):
            if(a < b):
                return -1
            elif(a > b):
                return 1
        return 0