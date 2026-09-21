class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int, bool> rec;
        for (auto it : nums) {
            if (it % k == 0) {
                rec[it / k] = true;
            }
        }
        int i = 1;
        while (true) {
            if (!rec[i]) {
                return i * k;
            }
            i++;
        }
        return i;
    }
    
};