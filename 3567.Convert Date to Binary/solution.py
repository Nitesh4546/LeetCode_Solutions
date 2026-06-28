class Solution(object):
    def convertDateToBinary(self, date):
        """
        :type date: str
        :rtype: str
        """
        date = list(map(int,date.split('-')))
        date = list(map(bin,date))
        date = [i[2:] for i in date]
        return "-".join(date)
