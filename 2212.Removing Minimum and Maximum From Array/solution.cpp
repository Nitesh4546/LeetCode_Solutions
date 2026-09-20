class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int min_ind = 0;
        int max_ind = 0;
        int n = nums.size();
        int min_ = INT_MAX;
        int max_ = INT_MIN;

        for(int i = 0; i < n; i++) {
            if(nums[i] < min_) {
                min_ = nums[i];
                min_ind = i;
            }
            if(nums[i] > max_) {
                max_ = nums[i];
                max_ind = i;
            }
        }
        int left = min(min_ind, max_ind);
        int right = max(min_ind, max_ind);

        int opt1 = right + 1;
        int opt2 = n - left;
        int opt3 = (left + 1) + (n - right);
        return min({opt1, opt2, opt3});
    }
};