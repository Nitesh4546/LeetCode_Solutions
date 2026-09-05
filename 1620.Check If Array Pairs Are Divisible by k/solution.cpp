class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int> rec(k, 0);
        int n = arr.size();

        for(int i = 0; i < n; i++) {
            int rem = ((arr[i] % k) + k) % k; 
            rec[rem]++;
        }
        if(rec[0] % 2) {
            return false;
        }
        for(int i = 1; i < k; i++) {
            if(rec[i] != rec[k - i]) {
                return false;
            }
        }
        return true;
    }
};