class Solution {
public:
    bool helper(vector<int>& price, int mid, int k) {
        int count = 1;
        int last = price[0];
        int n = price.size();
        for(int i = 0; i < n; i++) {
            if(price[i] - last >= mid) {
                count++;
                last = price[i];
                if(count >= k) {
                    return true;
                }
            }
        }
        return false;
    }
    int maximumTastiness(vector<int>& price, int k) {
        sort(price.begin(), price.end());
        
        int n = price.size();
        int l = 0;
        int r = price.back() - price.front();
        int res = 0;
        
        while(l <= r) {
            int mid = l + (r - l) / 2;

            if(helper(price, mid, k)) {
                res = mid;
                l = mid + 1;
            }else {
                r = mid - 1;
            }
        }
        return res;
    }
};