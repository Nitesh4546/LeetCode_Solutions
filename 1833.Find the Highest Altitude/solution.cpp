class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int curr = 0;
        int max_ = 0;
        int n = gain.size();
        for(int i = 0; i < n; i++) {
            curr += gain[i];
            max_ = max(max_, curr);
        }
        return max_;
    }
};