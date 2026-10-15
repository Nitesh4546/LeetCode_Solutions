class Solution(object):
    def minNumber(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: int
        """
        nums1 = set(nums1)
        nums2 = set(nums2)
        inter = nums1.intersection(nums2)
        if inter:
            return min(inter)
        return min(min(nums1)*10+min(nums2),min(nums1)+min(nums2)*10)
        