class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.begin() ,nums.end(), [&](int a, int b) {
            return a > b;
        });

        vector<int> temp(k, 0);
        for(int i = 0; i < k; i++) {
            temp[i] = max(1, mul - i);
        }
        sort(temp.begin() ,temp.end(), [&](int a, int b) {
            return a > b;
        });

        long long sum_ = 0;
        for(int i = 0; i < k; i++) {
            sum_ += (long long)nums[i] * temp[i];
        }
        return sum_;
    }
};