class Solution {
public:
    void premu(vector<vector<int>>& res, vector<int>& nums, vector<int>& temp, vector<bool>& used) {
        if(temp.size() == nums.size()) {
            res.push_back(temp);
            return;
        }

        for(int i = 0; i < nums.size(); i++) {
            if(used[i]) continue;
            if (i > 0 && nums[i] == nums[i - 1] && !used[i - 1]) {
                continue;
            }
            used[i] = true;
            temp.push_back(nums[i]);
            premu(res, nums, temp, used);

            used[i] = false;
            temp.pop_back();
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        vector<bool> used(nums.size(), false);
        vector<int> temp;
        premu(res, nums, temp, used);
        return res;
    }
};