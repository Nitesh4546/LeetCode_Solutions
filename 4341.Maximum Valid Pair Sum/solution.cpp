class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        int a = nums[0];

        for(int j = k; j < n; j++) {
            a = max(a, nums[j - k]);
            sum = max(sum, a + nums[j]);
        }
        return sum;
    }
};