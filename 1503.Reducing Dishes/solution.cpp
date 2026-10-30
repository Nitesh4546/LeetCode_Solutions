class Solution {
public:
    int maxSatisfaction(vector<int>& stas) {
        sort(stas.begin(), stas.end());
        int total = 0;
        int curr = 0;
        int res = 0;
        int n = stas.size();
        for(int i = n - 1; i >= 0; i--) {
            curr += stas[i] + total;
            total += stas[i];
            res = max(res, curr);
        }
        return res;
    }
};