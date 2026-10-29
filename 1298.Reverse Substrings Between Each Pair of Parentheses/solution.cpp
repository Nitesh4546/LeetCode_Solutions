class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> st;
        int n = s.size();
        string res = "";
        
        for(int i = 0; i < n; i++) {
            char ch = s[i];

            if(ch == '(') {
                st.push(res.size());
            }else if(ch == ')') {
                int start = st.top();
                st.pop();
                int end = res.size() - 1;
                reverse(res.begin() + start, res.end());
            }else {
                res += ch;
            }
        }
        return res;
    }
};