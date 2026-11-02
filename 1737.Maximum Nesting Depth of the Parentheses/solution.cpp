class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int res = 0;
        int n = s.size();
        for(int i = 0; i < n; i++) {
            if(s[i] == '(') {
                st.push('(');
                res = max(res, (int)st.size());
            } else if(s[i] == ')') {
                if(!st.empty()) {
                    st.pop();
                }
            }
        }
        return res;
    }
};