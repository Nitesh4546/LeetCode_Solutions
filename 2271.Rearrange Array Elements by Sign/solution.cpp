class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n, 0);
        int inde = 0;
        int indo = 1;
        for(int i = 0; i < n; i++) {
            if(nums[i] > 0) {
                res[inde] = nums[i];
                inde += 2;
            }else {
                res[indo] = nums[i];
                indo += 2;
            }
        }
        return res;
    }
};