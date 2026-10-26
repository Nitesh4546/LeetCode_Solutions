class Solution {
public:
    string removeKdigits(string num, int k) {
        //pre-exit
        string res = "";
        for(char d: num) {
            while(k > 0 && !res.empty() && res.back() > d) {
                res.pop_back();
                k--;
            }
            res.push_back(d);
        }

        while(k > 0 && !res.empty()) {
            res.pop_back();
            k--;
        }
        int ind = 0;
        while(ind < (int)res.size() && res[ind] == '0') {
            ind++;
        }
        string ans = res.substr(ind);
        return ans.empty() ? "0" : ans;
    }
};