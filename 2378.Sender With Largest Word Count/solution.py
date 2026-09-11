class Solution(object):
    def largestWordCount(self, messages, senders):
        """
        :type messages: List[str]
        :type senders: List[str]
        :rtype: str
        """
        
        users = set(senders)
        # print(users)
        words_counts = [len(s.split()) for s in messages]
        # print(words_counts)
        n = len(messages)
        rec = {_:0 for _ in users}
        for i in range(n):
            rec[senders[i]] += words_counts[i]
        print(rec)
        # max words
        max_ = max(rec.values())

        # total user with max words
        temp = []
        for i in rec:
            if rec[i]==max_:
                temp.append(i)
        return sorted(temp)[-1]