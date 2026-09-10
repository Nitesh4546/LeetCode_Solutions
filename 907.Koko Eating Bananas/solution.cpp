class Solution {
public:
    bool helper(vector<int>& piles, int rate, int h){
        int need = 0;
        for(int i: piles) {
            need = need + (i + rate - 1) / rate;
            if(need > h){
                return false;
            }
        }
        return need <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = 0;
        for(int i:piles) {
            if(r < i) {
                r = i;
            }
        }

        while(l < r) {
            int mid = l + (r - l) / 2;
            if(helper(piles, mid, h)) {
                r = mid;
            }else {
                l = mid + 1;
            }
        }
        return r;
    }
};