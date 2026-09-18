class Solution(object):
    def arrangeWords(self, text):
        """
        :type text: str
        :rtype: str
        """
        # words = sorted(text.lower().split(),key=lambda x:len(x))
        return " ".join(sorted(text.lower().split(),key=lambda x:len(x))).capitalize()

        