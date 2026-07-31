class Solution(object):
    def merge(self, intervals):
        """
        :type intervals: List[List[int]]
        :rtype: List[List[int]]
        """
        if not intervals:
            return []
        intervals.sort()
        merger = []
        merger.append(intervals[0])

        for interval in intervals[1:]:
            if interval[0] <= merger[-1][1]:
                if interval[1] >= merger[-1][1]:
                    merger[-1][1] = interval[1]
            else:
                merger.append(interval)
        return merger
        