class Solution(object):
    def bestHand(self, ranks, suits):
        """
        :type ranks: List[int]
        :type suits: List[str]
        :rtype: str
        """
        # recS = {i:0 for i in "abcd"}
        # recR = {i:0 for i in range(1,14)}
        # n = len(ranks)
        # for i in range(n):
        #   recS[suits[i]]+=1
        #   recR[ranks[i]]+=1

        # #condtion 1
        # for i in recS:
        #   if recS[i]==5:
        #     return "Flush"
        #     # print("Flush")
        #     # break
        # # condition 2
        # for i in recR:
        #   if(recR[i]>=3):
        #     return "Three of a Kind"
        #   elif(recR[i]==2):
        #     return "Pair"
          
        #     # print("Kind")
        #     # break

        # #conditon 4 
        # # print("Hgh")
        # return "High Card"
        if(len(set(suits))==1):return "Flush"
        count = {}
        for i in ranks:
            count[i] = count.get(i,0)+1
        max_ = max(count.values())

        if(max_>=3):
            return "Three of a Kind"
        elif(max_==2):
            return "Pair"
        return "High Card"