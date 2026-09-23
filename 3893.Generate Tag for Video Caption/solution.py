class Solution(object):
    def generateTag(self, caption):
        """
        :type caption: str
        :rtype: str
        """
        temp = caption.lower().split()
        if(len(temp)==0):
            return "#"
        res = ["#"+temp[0]]
        for i in temp[1:]:
            res.append(i.title())
        result =  "".join(res)
        return result[:100]
        