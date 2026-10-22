class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int ind = 0;
        int min_ = nums[ind];
        for(int i=0; i<n; i++) {
            if(nums[i]<min_) {
                ind = i;
                min_ = nums[i];
            }
        }
        if (nums[0] == nums[n - 1]) {
            for (int i = 0; i < n - 1; i++) {
                if (nums[i] > nums[i + 1]) {
                    ind = i + 1;
                    break;
                }
            }
        }
        for (int i = 0; i < n - 1; i++) {
            if (nums[(ind + i) % n] > nums[(ind + i + 1) % n]) {
                return false;
            }
        }
        
        return true;
    }
};