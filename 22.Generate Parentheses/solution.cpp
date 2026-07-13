class Solution {
public:
    void gen(int open, int close, int n, string temp, vector<string>& res) {
        if(open == n && close == n) {
            res.push_back(temp);
            return;
        }

        if(open < n) {
            temp.push_back('(');
            gen(open + 1, close, n, temp, res);
            temp.pop_back();
        }
        if(open > close) {
            temp.push_back(')');
            gen(open, close + 1, n, temp, res);
            temp.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        gen(0, 0, n, "", res);
        return res;
    }
};