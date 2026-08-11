class Solution(object):
    def maxDistance(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: int
        """
        i = 0
        j = 0
        max_ = 0
        n1 = len(nums1)
        n2 = len(nums2)

        while i<n1 and j<n2:
            if nums1[i]<=nums2[j]:
                max_ = max(max_, j-i)
                j+=1
            else:
                i+=1
                if i>j:
                    j = i
        return max_