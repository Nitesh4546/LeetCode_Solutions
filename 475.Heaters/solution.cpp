class Solution {
public:
    bool helper(vector<int>& houses, vector<int>& heaters, int r) {
        int n = houses.size();
        int m = heaters.size();
        int i = 0;
        int j = 0;
        int count = 0;
        while(i < n && j < m) {
            if(abs(houses[i] - heaters[j]) <= r) {
                count++;
                i++;
            }else if(heaters[j] + r < houses[i]) {
                j++;
            }else{
                return false;
            }
        }
        return count == n;
    }
    int findRadius(vector<int>& houses, vector<int>& heaters) {

        int n = houses.size();
        int m = heaters.size();

        sort(houses.begin(), houses.end());
        sort(heaters.begin(), heaters.end());

        int l = 0;
        int r = max(houses[n - 1], heaters[m - 1]) - min(houses[0], heaters[0]);
        int res = -1;
        
        while(l <= r) {
            int mid = l + (r - l) / 2;
            if(helper(houses, heaters, mid)) {
                res = mid;
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        return res;
    }
};