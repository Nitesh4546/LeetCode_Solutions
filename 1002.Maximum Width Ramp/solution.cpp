class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int res = 0;
        int n = nums.size();
        stack<int> st;

        // decreasing monotoic stack 
        for(int i = 0; i < n; i++) {
            if(st.empty() || nums[st.top()] > nums[i]) {
                st.push(i);
            }
        }
        
        for(int i = n - 1; i >= 0; i--) {
            while(!st.empty() && nums[st.top()] <= nums[i]) {
                res = max(res, i - st.top());
                st.pop();
            }
        }

        return res;
    }
};