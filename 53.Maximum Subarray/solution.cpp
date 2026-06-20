class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_ = INT_MIN;
        int n = nums.size();
        int curr = 0;
        for(int i = 0; i < n; i++) {
            curr += nums[i];
            max_ = max(curr, max_);

            if(curr < 0) {
                curr = 0;
            }
        }
        return max_;
    }
};