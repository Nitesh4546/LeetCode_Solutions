class Solution {
public:
    bool helper(vector<int>& weights, int cap, int days) {
        int need = 1;
        int total = 0;
        for(int i:weights) {
            if(i > cap) return false;
            if(total + i > cap) {
                total = i;
                need++;
                if(need > days) {
                    return false;
                }
            }else{
                total += i;
            }

        }
        return need <= days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int l = weights[0];
        int r = 0;
        
        for(int i:weights) {
            r += i;
            if(i >= l) {
                l = i;
            }
        }
        int res = 0;

        while(l < r) {
            int mid = l + (r - l - 1) / 2;

            if(helper(weights, mid, days)) {
                r = mid;
            }else {
                l = mid + 1;
            }
        }
        return r;
    }
};