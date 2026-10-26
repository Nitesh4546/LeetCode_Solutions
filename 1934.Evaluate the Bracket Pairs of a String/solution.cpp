class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> rec;
        for(const vector<string>& it : knowledge) {
            rec[it[0]] = it[1];
        }
        
        string ans = "";
        int n = s.size();
        
        for(int i = 0; i < n; i++) {
            if(s[i] == '(') {
                string key = "";
                i++;
                while(i < n && s[i] != ')') {
                    key += s[i];
                    i++;
                }
                if(rec.count(key)) {
                    ans += rec[key];
                } else {
                    ans += "?";
                }
            } else {
                ans += s[i];
            }
        }
        
        return ans;
    }
};
