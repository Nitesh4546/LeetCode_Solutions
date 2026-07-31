class Solution {
public:
    bool static cmp(vector<int>&a, vector<int>&b){
        return a[0]<b[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),cmp);
        vector<vector<int>> res;
        res.push_back(intervals[0]);
        int n = intervals.size();
        for(int i = 1; i < n; i++) {
            if (intervals[i][0] <= res[res.size()-1][1]) {
                res[res.size()-1][1] = max(res[res.size()-1][1], intervals[i][1]);
            }else{
                res.push_back(intervals[i]);
            }
        }
        return res;
    }
};