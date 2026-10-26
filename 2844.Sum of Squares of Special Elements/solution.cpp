class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        int sum_ = 0;
        for(int i = 0; i < n; i++) {
            if(n % (i + 1) == 0) {
                sum_ += nums[i] * nums[i];
            }
        }
        return sum_;
    }
};