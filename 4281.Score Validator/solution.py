class Solution(object):
    def scoreValidator(self, events):
        """
        :type events: List[str]
        :rtype: List[int]
        """
        score = 0
        counter = 0
        for event in events:
            if event in {"0", "1", "2", "3", "4", "6"}:
                score += int(event)
            elif event == "WD" or event == "NB":
                score += 1
            else:
                counter += 1
            if counter==10:
                break
        return [score, counter]