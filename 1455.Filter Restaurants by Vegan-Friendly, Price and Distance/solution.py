class Solution(object):
    def filterRestaurants(self, restaurants, veganFriendly, maxPrice, maxDistance):
        """
        :type restaurants: List[List[int]]
        :type veganFriendly: int
        :type maxPrice: int
        :type maxDistance: int
        :rtype: List[int]
        """
        res = []
        
        for i in restaurants:
            # if i[2] < veganFriendly:
            if veganFriendly==1 and i[2]==0:
                continue

            if(i[3]<=maxPrice and i[4]<=maxDistance):
                res.append(i)
        res.sort(key = lambda a:(a[1],a[0]),reverse=True)
        return [r[0] for r in res]
        