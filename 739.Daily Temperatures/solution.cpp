class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        int n = arr.size();
        vector<int> res(n, 0);
        vector<int> st;
        for(int i = n - 1; i >= 0; i--) {
            while(!st.empty() && arr[st.back()] <= arr[i]) {
                st.pop_back();
            }
            if(!st.empty()) {
                res[i] = st.back();
            }
            st.push_back(i);
        }
        for(int i = 0; i < n; i++) {
            res[i] -= i;
            if(res[i] < 0) {
                res[i] = 0;
            }
        }

        return res;
    }
};