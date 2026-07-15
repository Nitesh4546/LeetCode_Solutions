class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int n_l = landStartTime.size();
        int n_w = waterStartTime.size();
        
        //land
        int l_min = INT_MAX;
        for(int i = 0; i < n_l; i++) {
            l_min = min(l_min, landStartTime[i] + landDuration[i]);
        }

        int total_1 = INT_MAX;
        for(int i = 0; i < n_w; i++) {
            int curr = max(l_min, waterStartTime[i]) + waterDuration[i];
            total_1 = min(total_1, curr);
        }
        
        //water
        int w_min = INT_MAX;
        for(int i = 0; i < n_w; i++) {
            w_min = min(w_min, waterStartTime[i] + waterDuration[i]);
        }

        int total_2 = INT_MAX;
        for(int i = 0; i < n_l; i++) {
            int curr = max(w_min, landStartTime[i]) + landDuration[i];
            total_2 = min(total_2, curr);
        }

        return min(total_1, total_2);
    }
};