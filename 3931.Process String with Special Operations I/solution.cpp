class Solution {
public:
    string processStr(string s) {
        string res = "";
        for(char c:s) {
            if(c == '#') {
                res += res;
            } else if(c == '%') {
                reverse(res.begin(), res.end());
            } else if(c == '*') {
                //
                if(res.size() >= 2) {
                    res.resize(res.size() - 1);
                }else{
                    res.clear();
                }
            } else {
                res += c;
            }
        }
        return res;
    }
};