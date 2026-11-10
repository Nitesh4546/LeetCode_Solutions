class Solution {
public:
    // bool monoton(int n) {
    //     string num = to_string(n);
    //     int s = num.size();
        
    //     if(s >= 2) {
    //         for(int i = 1; i < s; i++) {
    //             if(num[i - 1] > num[i]) { 
    //                 return false;
    //             }
    //         }
    //     }
        
    //     return true;
    // }
    int monotoneIncreasingDigits(int k) {
        string nums = to_string(k);

        int n = nums.size();
        int rec = n;//marker
        for(int i = n -1; i > 0; i--) {
            if(nums[i - 1] > nums[i]) {
                nums[i - 1]--;
                rec = i;
            }
        }
        for(int i = rec; i < n; i++) {
            nums[i] = '9';
        }
        return stoi(nums);
    }
};