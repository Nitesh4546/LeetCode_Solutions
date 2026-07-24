class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        vector<int> st;
        
        for (int as : a) {
            bool destroyed = false;
            
            while (!st.empty() && as < 0 && st.back() > 0) {
                if (st.back() < -as) {
                    st.pop_back();
                    continue;
                } else if (st.back() == -as) {
                    st.pop_back();
                    destroyed = true;
                    break;
                } else {
                    destroyed = true;
                    break;
                }
            }
            if (!destroyed) {
                st.push_back(as);
            }
        }
        
        return st;
    }
};