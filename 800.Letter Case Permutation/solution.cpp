class Solution {
public:
    void helper(int ind, string temp, string s,vector<string>& res) {
        if(ind == s.size()) {
            res.push_back(temp);
            return;
        }
        if(isalpha(s[ind])) {
            //upper case
            temp.push_back(toupper(s[ind]));
            helper(ind + 1, temp, s, res);
            //backtrack
            temp.pop_back();
            //lower case
            temp.push_back(tolower(s[ind]));
            helper(ind + 1, temp, s, res);
        
        }else {
            //digit
            temp.push_back(s[ind]);
            helper(ind + 1, temp, s, res);
        }

    }
    vector<string> letterCasePermutation(string s) {
        vector<string> res;
        string curr;
        helper(0, curr, s, res);
        return res;
    }
};