class Solution {
public:
    void helper(int ind, int sum, int k, vector<vector<int>>& res, vector<int>& temp, const vector<int>& arr) {
        if(k == 0) {
            res.push_back(temp);
            return;
        }
        for(int i = ind; i < arr.size(); i++) {
            if(i > ind && arr[i - 1] == arr[i]) {
                continue;
            }
            if(arr[i] > k) {
                break;
            }
            temp.push_back(arr[i]);
            helper(i + 1, sum + arr[i], k - arr[i], res, temp, arr);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& arr, int k) {
        sort(arr.begin(), arr.end());
        vector<vector<int>> res;
        vector<int> temp;
        helper(0, 0, k, res, temp, arr);
        return res;
    }
};