class Solution(object):
    def numberOfEmployeesWhoMetTarget(self, hours, target):
        """
        :type hours: List[int]
        :type target: int
        :rtype: int
        """
        c = 0
        for hr in hours:
            if hr>=target:
                c+=1
        return c
        