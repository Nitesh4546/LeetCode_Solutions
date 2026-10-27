class Solution {
public:
    int sum_(int a) {
        int sum__ = 0;
        a = abs(a);
        while(a != 0) {
            sum__ += a % 10;
            a /= 10;
        }
        return sum__;
    }
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<pair<int, int>> arr(n);

        for(int i = 0; i < n; i++) {
            arr[i] = {nums[i], i}; // val, ind
        }

        sort(arr.begin(), arr.end(), [&](pair<int, int>& a, pair<int, int>& b) {
            int sumA = sum_(a.first);
            int sumB = sum_(b.first);
            if(sumA != sumB) {
                return sumA < sumB;
            }
            return a.first < b.first;
        });

        int swap = 0;
        vector<bool> vis(n, false);

        for(int i = 0; i < n; i++) {
            if(vis[i] || arr[i].second == i) {
                continue;
            }
            int cz = 0;
            int j = i;
            while(!vis[j]) {
                vis[j] = true;
                j = arr[j].second;
                cz++;
            }
            if(cz > 0) {
                swap += (cz - 1);
            }
        }
        return swap;
    }
};