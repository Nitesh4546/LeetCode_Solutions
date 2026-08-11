class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int r = n-1;
        int swap = 0;

        while(l<r) {
            while(l<r && nums[l]!=0) l++; //find 0
            while(l<r && nums[r]==0) r--;//find non-0
            if(l<r){
                l++;
                r--;
                swap++;
            }
        }
        return swap;
    }
};