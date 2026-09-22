class Solution(object):
    def leap(self, year): 
        return (year%4==0 and year%100!=0) or (year%400==0)
    def yeardays(self, date):
            y, m, d = map(int ,date.split('-'))
            days = 0
            for yr in range(1971, y):
                if self.leap(yr):
                    days+=366
                else:
                    days+= 365
            
            month = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
            for mn in range(m-1):
                days+=month[mn]
            if m>2 and self.leap(y):
                days+=1
            
            days+=d
            return days
    def daysBetweenDates(self, date1, date2):
        """
        :type date1: str
        :type date2: str
        :rtype: int
        """
        
        
        return abs(self.yeardays(date2)-self.yeardays(date1))
