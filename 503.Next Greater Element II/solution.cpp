class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n, -1);
        vector<int> st;

        for(int i = (2 * n - 1); i >= 0; i--) {
            while(!st.empty() && st.back() <= nums[i % n]) {
                st.pop_back();
            }

            if(i < n) {
                if(!st.empty()) {
                    res[i] = st.back();
                }
            }
            st.push_back(nums[i % n]);
        }
        return res;
    }
};