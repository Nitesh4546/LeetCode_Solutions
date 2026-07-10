class Solution(object):
    def reportSpam(self, message, bannedWords):
        """
        :type message: List[str]
        :type bannedWords: List[str]
        :rtype: bool
        """
        record = set(bannedWords)
        count = 0
        for i in message:
            if i in record:
                count+=1 
            if count>=2:
                return True       
        return False