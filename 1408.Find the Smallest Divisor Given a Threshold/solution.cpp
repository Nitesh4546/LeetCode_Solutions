class Solution {
public:
    bool helper(vector<int>& nums, int limit, int curr) {
        long long sum_ = 0;
        for(int i: nums) {
            sum_ += (i + curr - 1) / curr;
            if(sum_ > limit) {
                return false;
            }
        }
        return sum_ <= limit;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l = 1;
        int r = *std::max_element(nums.begin(), nums.end());
        int res = r;
        while(l <= r) {
            int mid = l + (r - l) / 2;
            if(helper(nums, threshold, mid)) {
                res = mid;
                r = mid - 1;
            }else {
                l = mid + 1;
            }
        }
        return  res;
    }
};