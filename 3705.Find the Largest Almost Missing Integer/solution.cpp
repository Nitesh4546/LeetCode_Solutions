class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        vector<int> arr(51, 0);

        for(int i: nums) {
            arr[i]++;
        }

        int res = -1;
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            if(k == n || (arr[nums[i]] == 1 && (k == 1 || !i || i == n - 1))) {
                res = max(res, nums[i]);
            }
        }
        return res;
    }
};