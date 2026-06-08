class Solution(object):
    def minMaxDifference(self, num):
        """
        :type num: int
        :rtype: int
        """
        # max_ = num
        # min_ = num
        # rec = {}
        # num = str(num)

        # for i in num:
        #     rec[i] = rec.get(i,0)+1
        # for i in rec:
        #     min_ = min(min_,int(num.replace(rec[i],0))
        #     max_ = max(max_,int(num.replace(rec[i],9))
        # return max_ - min_

        max_ = num
        num = str(num)
        for i in num:
            if i !='9':
                max_ = int(num.replace(i,'9'))
                break
        min_ = int(num.replace(num[0],'0'))
        return max_ - min_

        