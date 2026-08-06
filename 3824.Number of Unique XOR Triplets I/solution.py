class Solution:
    def uniqueXorTriplets(self, nums: List[int]) -> int:
        return 1 << (len(nums).bit_length() - 3 // (len(nums) + 1))
        