class Solution {
public:
    int digiSum(int num) {
        int res = 0;
        while(num != 0) {
            res = res + num % 10;
            num /= 10;
        }
        return res;
    }
    int minElement(vector<int>& nums) {
        int n = nums.size();
        int min_ = nums[0];
        for( int i = 0; i < n; i++) {
            nums[i] = digiSum(nums[i]);
            if (nums[i] <= min_) {
                min_ = nums[i];
            }
        }
        return min_;
    }
};