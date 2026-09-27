class Solution {
public:
    bool helper(vector<int>& citations, int h) {
        int curr = 0;
        for(int i:citations) {
            if(i >= h) {
                curr++;
            }
            if(curr >= h){
                return true;
            }
        }
        return curr >= h;
    }
    int hIndex(vector<int>& citations) {
        int l = 0;
        int r = 0;
        int res = -1;
        for(int i:citations) {
            if(l > i) {
                l = i;
            }
            if(r < i) {
                r = i;
            }
        }

        while(l <= r){
            int mid = l + (r - l) / 2;
            if(helper(citations, mid)) {
                res = mid;
                l = mid + 1;
            }else {
                r = mid - 1;
            }
        }
        return res;
    }
};