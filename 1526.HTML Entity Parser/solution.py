class Solution(object):
    def entityParser(self, text):
        """
        :type text: str
        :rtype: str
        """
        rec = {
            "&quot;":"\"",
            "&apos;":"\'",
            "&amp;":"&",
            "&gt;":">",
            "&lt;":"<",
            "&frasl;":"/",
        }

        # for i in rec:
        #     if i in text:
        #         text = text.replace(i,rec[i])
        # return text
        

        # n = len(text)
        # res = []
        # i = 0
        # while i < n:
        #     if text[i] == '&':
        #         end_idx = text.find(';', i, i + 7) 
                
        #         if end_idx != -1:
        #             candidate = text[i : end_idx + 1]
        #             if candidate in rec:
        #                 res.append(rec[candidate])
        #                 i = end_idx + 1
        #                 continue 
                
        #     res.append(text[i])
        #     i += 1
        
        res = []
        i = 0
        n = len(text)
        
        while i < n:
            if text[i] == '&':
                end = text.find(';', i, i + 7)
                
                if end != -1:
                    tag = text[i : end + 1]
                    if tag in rec:
                        res.append(rec[tag])
                        i = end + 1
                        continue 
                
            res.append(text[i])
            i += 1
                
        return "".join(res)