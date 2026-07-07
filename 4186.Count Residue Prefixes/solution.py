class Solution(object):
    def residuePrefixes(self, s):
        count = 0
        distinct_seen = set()
        for i, char in enumerate(s):
            distinct_seen.add(char)
            prefix_len = i + 1
            distinct_count = len(distinct_seen)
            if distinct_count == (prefix_len % 3):
                count += 1
        return count
        