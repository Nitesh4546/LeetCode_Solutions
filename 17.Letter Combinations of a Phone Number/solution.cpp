class Solution {
public:
    void gen(int i, string digits, string temp, vector<string>& res, vector<string>& rec) {
        if(i == digits.size()) {
            res.push_back(temp);
            return;
        }
        int num = digits[i] - '0';
        string value = rec[num];
        for(int j = 0; j < value.size(); j++) {
            temp.push_back(value[j]);
            gen(i + 1, digits, temp, res, rec);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        //mapping
        vector<string> rec(10);
        rec[2] = "abc";
        rec[3] = "def";
        rec[4] = "ghi";
        rec[5] = "jkl";
        rec[6] = "mno";
        rec[7] = "pqrs";
        rec[8] = "tuv";
        rec[9] = "wxyz";
        vector<string> res;
        gen(0, digits, "", res, rec);
        return res;

    }
};