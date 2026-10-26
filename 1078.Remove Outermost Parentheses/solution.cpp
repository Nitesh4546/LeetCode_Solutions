class Solution {
public:
    string removeOuterParentheses(string s) {
        vector<char> st;
        string res = "";
        for(char c: s) {
            if(c == '(') {
                if(!st.empty()) {
                    res += c;
                }
                st.push_back(c);
            }else {
                st.pop_back();
                if(!st.empty()) {
                    res += c;
                }
            }
        }
        return res;
    }
};