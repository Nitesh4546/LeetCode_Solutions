class Solution {
public:
    void helper(int r, int c, int n, int m, int ind, string& s, int count, vector<int>& res) {
        if(r < 0 || c < 0 || r >= n || c >= n) {
            res.push_back(count - 1);
            return;
        }

        if (ind == m) {
            res.push_back(count);
            return;
        }
        char ch = s[ind];
        if(ch == 'R') {
            helper(r, c + 1, n, m, ind + 1, s, count + 1, res);
        }else if(ch == 'L') {
            helper(r, c - 1, n, m, ind + 1, s, count + 1, res);
        }else if(ch == 'U') {
            helper(r - 1, c, n, m, ind + 1, s, count + 1, res);
        }else {
            helper(r + 1, c, n, m, ind + 1, s, count + 1, res);
        }
    }
    vector<int> executeInstructions(int n, vector<int>& str, string s) {
        vector<int> res;

        int m = s.size();
        for(int i = 0; i < m; i++) {
            helper(str[0], str[1], n, m, i, s, 0, res);
        }

        return res;
    }
};