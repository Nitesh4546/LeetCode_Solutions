class Solution {
public:
    string res = "";
    unordered_map<char, int>rec1;
    unordered_map<char, int>rec2;
    bool helper(string& s, int len, int n1) {
        rec1.clear();
        int matched = 0;

        for (int i = 0; i < len; i++) {
            char c = s[i];
            rec1[c]++;
            if (rec2.count(c) && rec1[c] == rec2[c]) {
                matched++;
            }
        }
        if (matched == rec2.size()) {
            res = s.substr(0, len); 
            return true;
        }

        for (int i = len; i < n1; i++) {
            char pop = s[i - len];
            if (rec2.count(pop) && rec1[pop] == rec2[pop]) {
                matched--;
            }
            rec1[pop]--;

            char push = s[i];
            rec1[push]++;
            if (rec2.count(push) && rec1[push] == rec2[push]) {
                matched++;
            }

            if (matched == rec2.size()) {
                res = s.substr(i - len + 1, len);
                return true;
            }
        }
        return false;
    }

    string minWindow(string s, string t) {
        int n1 = s.size();
        int n2 = t.size();
        res = "";
        if (n1 < n2) return res;
        
        for(char c: t){
            rec2[c]++;
        }
        
        int l = n2;
        int r = n1;

        while(l <= r) {
            int mid = l + (r - l) / 2;
            if(helper(s, mid, n1)) {
                r = mid - 1;
            }else {
                l = mid + 1;
            }
        }
        return res;
    }
};