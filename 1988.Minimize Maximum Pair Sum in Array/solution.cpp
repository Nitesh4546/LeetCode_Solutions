class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int l = 0;
        int r = nums.size()-1;
        int curr = 0;
        int max_p = 0;
        while(l<r){
            curr = nums[l]+nums[r];
            max_p = max(max_p, curr);
            l++;
            r--;
        }
        return max_p;
    }
};