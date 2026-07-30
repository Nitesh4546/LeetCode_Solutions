class Solution(object):
    def findDifference(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[List[int]]
        """
        nums1 = set(nums1)
        nums2 = set(nums2)
        # nums1 = list(temp1)
        # nums2 = list(temp2)
        res = [[],[]]
        for i in nums1:
            if i not in nums2:
                res[0].append(i)
        for i in nums2:
            if i not in nums1:
                res[1].append(i)
        return res
        # return [list(set(nums1)-set(nums2)), list(set(nums2)-set(nums2))]