class Solution {
public:
    vector<vector<int>> filterOccupiedIntervals(vector<vector<int>>& occupiedIntervals, int freeStart, int freeEnd) {
        sort(occupiedIntervals.begin(), occupiedIntervals.end(), [&](vector<int>& a, vector<int>& b) {
            return a[0] < b[0];
        });

        vector<vector<int>> merged;
        merged.push_back(occupiedIntervals[0]);
        int n = occupiedIntervals.size();
        
        for(int i = 1; i < n; i++) {
            if(occupiedIntervals[i][0] <= merged[merged.size() - 1][1] + 1) {
                merged[merged.size() - 1][1] = max(occupiedIntervals[i][1], merged[merged.size() - 1][1]);
            } else {
                merged.push_back(occupiedIntervals[i]);
            }
        }

        vector<vector<int>> res;
        for(vector<int> a : merged) {
            int start = a[0];
            int end = a[1];

            if(freeStart > end) {
                res.push_back({start, end});
            } else if(freeEnd < start) {
                res.push_back({start, end});
            } else {
                if(start < freeStart) {
                    res.push_back({start, freeStart - 1});
                }
                if(end > freeEnd) {
                    res.push_back({freeEnd + 1, end});
                }
            }
        }
        return res;
    }
};