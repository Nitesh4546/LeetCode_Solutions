class Solution(object):
    def centeredSubarrays(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)
        centered_count = 0
        
        for i in range(n):
            current_sum = 0
            seen_elements = set()
            
            for j in range(i, n):
                current_sum += nums[j]
                seen_elements.add(nums[j])
                
                if current_sum in seen_elements:
                    centered_count += 1
                    
        return centered_count