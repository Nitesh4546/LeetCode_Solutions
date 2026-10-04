class Solution {
public:
    bool helper(vector<int>& nums, int k, int& n, int& tar) {
        int sum_ = 0;
        for(int i = 0; i < k; i++) {
            sum_ += nums[i];
        }
        if(sum_ >= tar) return true;

        for(int i = k; i < n; i++) {
            sum_ += nums[i];
            sum_ -= nums[i - k];
            if(sum_ >= tar) {
                return true;
            }
        }
        return false;
    }
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int l = 1;
        int res = 0;
        int r = n;
        while(l <= r) {
            int mid = l + (r - l) / 2;
            if(helper(nums, mid, n, target)) {
                res = mid;
                r = mid - 1;
            }else {
                l = mid + 1;
            }
        }
        return res;
        

    }
};