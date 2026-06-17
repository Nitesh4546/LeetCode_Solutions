class Solution(object):
    def defangIPaddr(self, address):
        """
        :type address: str
        :rtype: str
        """
        # return address.replace('.','[.]')
        res = [0]*len(address)
        l=0
        for i in address:
            if i=='.':
                # res.append('[.]')
                res[l]= '[.]'
            else:
                # res.append(i)
                res[l] = i
            l+=1
        return "".join(res)
        # return "[.]".join(address.split('.'))

        