class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        // vector<int> res;
        int w=0;
        int n = nums.size();

        for(int i=0; i<n; i++) {
            if(w<k || nums[i]>nums[w-k]) {
                nums[w] = nums[i];
                // res.push_back(nums[i]);
                w++;
            }
        }
        nums.resize(w);
        return nums;
    }
};