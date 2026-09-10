class Solution(object):
    def topKFrequent(self, words, k):
        """
        :type words: List[str]
        :type k: int
        :rtype: List[str]
        """
        rec = {}
        for i in words:
            rec[i] = rec.get(i,0)+1
        # print(rec)
        rec = sorted(rec.items(),key=lambda x:(-x[1],x[0]))
        print(rec)
        return [_[0] for _ in rec[:k]]
        # top =  sorted(list(rec.keys())[:k])
        # return top
        # return sorted(list(rec.keys()))[:k]