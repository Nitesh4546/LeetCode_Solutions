class Solution {
public:
    int longestValidParentheses(string s) {
        vector<int> st;
        vector<int> vis(s.size(), -1);
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                st.push_back(i);
            }
            else{
                if(st.size() > 0){
                    int a = st.back();
                    st.pop_back();
                    vis[a] = 1;
                    vis[i] = 1;
                }
            }
        }
        int c = 0;
        int ans = 0;
        for(int x: vis){
            if(x == 1){
                c++;
                ans = max(ans, c);
            } else{
                c = 0;
            }
        }
        return ans;
    }
};