class Solution(object):
    def frequencySort(self, s):
        """
        :type s: str
        :rtype: str
        """
        record = {}
        for i in s:
          if i in record:
            record[i]+=1
          else:
            record[i]=1
        temp = sorted(list(record.items()),key = lambda x:x[1],reverse = True)
        res = []
        for i,j in temp:
          res.append(i*j)
        return ("".join(res))
        