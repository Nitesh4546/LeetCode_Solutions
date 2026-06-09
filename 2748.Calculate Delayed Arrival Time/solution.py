class Solution(object):
    def findDelayedArrivalTime(self, arrivalTime, delayedTime):
        """
        :type arrivalTime: int
        :type delayedTime: int
        :rtype: int
        """
        # time =  arrivalTime + delayedTime
        # if(time == 24):
            # return 0
        # return time
        return (arrivalTime + delayedTime)%24
        