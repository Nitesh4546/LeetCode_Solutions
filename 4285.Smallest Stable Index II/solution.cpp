class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> suffmin_(n, 0);
        vector<int> prefmax_(n, 0);

        prefmax_[0] = nums[0];
        suffmin_[n - 1] = nums[n - 1];

        for (int i = 1; i < n; i++) {
            prefmax_[i] = max(nums[i], prefmax_[i - 1]);
            suffmin_[n - i - 1] = min(nums[n - i - 1], suffmin_[n - i]);
        }

        for(int i = 0; i < n; i++) {
            int sc = prefmax_[i] - suffmin_[i];
            if(sc <= k) {
                return i;
            }
        }
        return -1;
    }
};