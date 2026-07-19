class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        // sort(nums.begin(), nums.end());

        int n = nums.size();
        int c = 0;
        for( int i = 0; i < n; i++) {
            for( int j = i + 1; j < n; j++) {
                if((nums[i] == nums[j]) && ((i * j)%k==0)) {
                    c++;
                }
            }
        }
        return c;
    }
};
//18